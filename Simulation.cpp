//
// Created by gunde on 3/16/2022.
//

#include <iostream>
#include "Simulation.h"
#include "Meal.h"
#include "Node.h"

// the prepTime and price of all the dishes
const string SALAD = "Salad";
const int SALAD_TIME = 3;
const float SALAD_COST = 6.99;

const string BURGER = "Burger";
const int BURGER_TIME = 4;
const float BURGER_COST = 8.99;

const string PIZZA = "Pizza";
const int PIZZA_TIME = 6;
const float PIZZA_COST = 12.99;

const string STEW = "Stew";
const int STEW_TIME = 7;
const float STEW_COST = 14.99;
// it will be better to store in a csv file for longer list and make a hashtable at run prepTime

//constructors
Simulation::Simulation(Linkedlist * lst) : orderId(1), numOrders(0), time(0), revenue(0),  startPrepTime(0), current(
        nullptr), lastend(0) { orders = lst; }

/**************************************************************************************
* Purpose: this function reads and process the arguments passed in to make them into
* a Meal instance
* @param exp : Expiry time of the order
* @param meal : the name of the meal ordered
* @param numIndg: the number of ingredients in the meal
* @param times : the time the dish was ordered at
*
* calls function so that they can process this data
*************************************************************************************/
void Simulation::read(int exp, string meal, int numIndg, int times) {

    // the time in the simulation upto which the orders need to be executed
    time = times;

    // the preptime and price of the meal to prepare
    float price;
    int prepTime;
    if (meal.compare(SALAD) == 0) {
        price = SALAD_COST;
        prepTime = SALAD_TIME;
    } else if (meal.compare(BURGER) == 0) {
        price = BURGER_COST;
        prepTime = BURGER_TIME;
    } else if (meal.compare(PIZZA) == 0) {
        price = PIZZA_COST;
        prepTime = PIZZA_TIME;
    } else if (meal.compare(STEW) == 0) {
        price = STEW_COST;
        prepTime = STEW_TIME;
    } else {
        cerr << "Error: Meal name not found" << endl;
        exit(-1);
    }

    // the meal has been created
    Meal *temp = new Meal(orderId, exp, meal, numIndg, prepTime+numIndg, price+numIndg);

    // increase the orderId
    orderId++;

    // meal is sent to be processed:)
    process(temp);

}


void Simulation::process(Meal *meal) {

    if (current == nullptr) {
        arrival(meal);
        add(new Node(meal, nullptr));
        // orders->enter(new Node(meal, nullptr));
        prepare();
    }

    // do until the dish cannot be cooked
    while (current->getPrepTime() + startPrepTime <= time ) {

        prepare();
        completeService();
        if (current == nullptr) {
            break;
        }
    }

    if (current != nullptr && current->getPrepTime() + startPrepTime > time && current != meal) {
        lastend = time;
        arrival(meal);
        add(new Node(meal, nullptr));
        //orders->enter(new Node(meal, nullptr));
    }
    if (current == nullptr && current != meal) {
        lastend = time;
        arrival(meal);
        add(new Node(meal, nullptr));
        //orders->enter(new Node(meal, nullptr));
        prepare();
    }

}

/*
 * In this function implements the arrival event
 */
void Simulation::arrival(Meal *meal) {
    // print the arrival of food
    cout << "TIME: " << time << ", Foodorder: " << meal->getOrderId();
    cout <<  " arrives -> ";
    meal->toString();
    cout << endl;
}

/**********************************************************************************
 * @Purpose this function checks if a meal can be prepared and starts preparing it
 *          from this list of orders
 **********************************************************************************/
void Simulation::prepare() {

    // if there is something to do and not doing it
    if (current == nullptr && !orders->isEmpty()) {
        current = dynamic_cast<Meal *>(remove()->getValue());
        //current = dynamic_cast<Meal *>(orders->leave()->getValue());
        while (true) {
            if (current->getExpiry() >= lastend) {
                break;
            }
            if (orders->isEmpty()) {
                current = nullptr;
                return;
            }
            current = dynamic_cast<Meal *>(remove()->getValue());
            //current = dynamic_cast<Meal *>(orders->leave()->getValue());
        }

        if (current->getExpiry() >= lastend) {

            // if the first time
            if (lastend == 0) {
                startPrepTime = time;
            } else {
                startPrepTime = lastend;
            }
            cout << "TIME: " << startPrepTime << ", Foodorder: " << current->getOrderId();
            cout << " is getting prepared by the chef!" << endl;
        }
    }

}

/**************************************************************************************
* @Purpose: this function check if the current dish can be prepared given the time
*           Also, this calls the preparation function if a dish has been served
*************************************************************************************/
void Simulation::completeService() {

    if ( current->getPrepTime() + startPrepTime <= time ) {

        // set the time of this dish end
        lastend = current->getPrepTime() + startPrepTime;

        cout << "TIME: " << lastend << ", Foodorder: " << current->getOrderId();
        cout << " has been served! Revenue grew by: $" << current->getPrice() << endl;

        // adds to the statistics
        numOrders++;
        revenue += current->getPrice();

        // free the cook
        current = nullptr;

        // get the cook on the next order
        prepare();
    }

}

// returns the orders list
Linkedlist * Simulation::getList() {
    return orders;
}

// polymorphic methods
void Simulation::add(Node * toAdd) {
    orders->addItem(toAdd);
}

Node *Simulation::remove() {
    return orders->deleteLast();
}

// methods that end the event driven simulation
void Simulation::finishOrders(){
    // the time in the simulation upto which the orders need to be executed

    // do until the dish cannot be cooked
    while ( current != nullptr ) {
        time += current->getPrepTime();
        completeService();
    }

}

void Simulation::end() {
    cout << ".. simulation ended." << endl;
    cout << "- Total number of orders completed: " << numOrders << endl;
    cout << "- Total revenue: $" << revenue << endl;
}

