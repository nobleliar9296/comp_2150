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


Simulation::Simulation() : orderId(1), numOrders(0), time(0), revenue(0), events(new Queue()), startPrepTime(0), current(
        nullptr), lastend(0) {}

void Simulation::read(int exp, string meal, int numIndg, int times) {

    // the time in the simulation upto which the events need to be executed
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

void Simulation::finishOrders(){
    // the time in the simulation upto which the events need to be executed

    // do until the dish cannot be cooked
    while ( current != nullptr ) {
        time += current->getPrepTime();
        CompleteService();
    }

}

void Simulation::process(Meal *meal) {

    if (current == nullptr) {
        arrival(meal);
        events->enter(new Node(meal, nullptr));
        preperation();
    }

    // do until the dish cannot be cooked
    while (current->getPrepTime() + startPrepTime <= time ) {

        preperation();
        CompleteService();
        if (current == nullptr) {
            break;
        }
    }

    if (current != nullptr && current->getPrepTime() + startPrepTime > time && current != meal) {
        lastend = time;
        arrival(meal);
        events->enter(new Node(meal, nullptr));
    }
    if (current == nullptr && current != meal) {
        lastend = time;
        arrival(meal);
        events->enter(new Node(meal, nullptr));
        preperation();
    }

    /*
    // add the events to the event list
    events->enter(new Node(meal, nullptr));

    bool iter = true;
    // if the chef is free
    while (true) {

        // if a meal has been completed then prepare next meal
        preperation();

        //check if the meals have been prepared
        CompleteService();

    }
     */

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

/*
 * this function checks if a meal can be prepared and starts preparing it
 */
void Simulation::preperation() {

    // if there is something to do and not doing it
    if (current == nullptr && !events->isEmpty()) {
        current = dynamic_cast<Meal *>(events->leave()->getValue());
        while (true) {
            if (current->getExpiry() >= lastend) {
                break;
            }
            if (events->isEmpty()) {
                current = nullptr;
                return;
            }
            current = dynamic_cast<Meal *>(events->leave()->getValue());
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



    /*// check if no meal in progress
    if (current == nullptr) {

        // check to see if there are more meals to prepare
        if (events->isEmpty()) {
            return false;
        }

        // get the meal to prepare from the orders of dishes
        current = dynamic_cast<Meal *>(events->leave()->getValue());

        // check if the meal has not expired
        if ( current->getExpiry() < lastend ) {
            current = nullptr;
            return;
        }

        // set the start time according to the meal at hand
        if (events->isEmpty()) {
            startPrepTime = time;
        } else {
            startPrepTime = lastend;
        }

        arrival(current);

        cout << "TIME: " << startPrepTime << ", Foodorder: " << current->getOrderId();
        cout << " is getting prepared by the chef!" << endl;

    }
*/
}

void Simulation::CompleteService() {

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
        preperation();
    }


    /*

    // check if the meal is in progress
    if (current != nullptr) {

        // check if the time of this ends before the next arrival
        if ( time > current->getPrepTime() + startPrepTime)  {

            lastend = current->getPrepTime() + startPrepTime;

            cout << "TIME: " << lastend << ", Foodorder: " << current->getOrderId();
            cout << " has been served! Revenue grew by: $" << current->getPrice() << endl;

            // adds to the statistics
            numOrders++;
            revenue += current->getPrice();

            // change the state of the chef
            current = nullptr;
        }
    }

     */
}

void Simulation::purge() {
    // purges all the expired orders
    while (true) {
        if ( time > dynamic_cast<Meal *>(events->toLeave()->getValue())->getExpiry()) {
            time = startPrepTime + current->getPrepTime();
        } else {
            return;
        }
    }
}


void Simulation::end() {
    cout << ".. simulation ended." << endl;
    cout << "- Total number of orders completed: " << numOrders << endl;
    cout << "- Total revenue: $" << revenue << endl;
}

