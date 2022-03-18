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

const int FREE = -1;

Simulation::Simulation() : orderId(1), numOrders(0), time(0), revenue(0), events(new Queue()), startPrepTime(FREE) {}

void Simulation::read(int exp, string meal, int numIndg, int times) {

    // the time in the simulation
    time = times;

    float price;
    int prepTime;
    if (meal.compare(SALAD)) {
        price = SALAD_COST;
        prepTime = SALAD_TIME;
    } else if (meal.compare(BURGER)) {
        price = BURGER_COST;
        prepTime = BURGER_TIME;
    } else if (meal.compare(PIZZA)) {
        price = PIZZA_COST;
        prepTime = PIZZA_TIME;
    } else if (meal.compare(STEW)) {
        price = STEW_COST;
        prepTime = STEW_TIME;
    } else {
        cerr << "Error: Meal name not found" << endl;
        exit(-1);
    }

    // the meal has been created
    Meal *temp = new Meal(orderId, exp, meal, numIndg, prepTime, price);
    orderId++;

    // meal is sent to be processed:)
    process(temp);

}

void Simulation::process(Meal *meal) {
    // if the chef is free
    arrival(meal);

}

/*
 * In this function implements the arrival event
 */
void Simulation::arrival(Meal *meal) {
    // print the arrival of food
    wrapper(meal);
    cout <<  "arrives ->";
    meal->toString();

    // food item enters the list of food items to prepare
    events->enter(new Node(meal, nullptr));

    //check if the food has been cooked
    if ( startPrepTime == FREE ) {
        if (!events->isEmpty()) {
            // we don't need to check cast as we only add meal items to events
            current = dynamic_cast<Meal *>(events->leave()->getValue());
        } else {
            end();
        }
    }
    preperation();
},  v

void Simulation::preperation() {

}

void Simulation::CompleteService() {
    wrapper(current);
    cout << " has been served! Revenue grew by: $" << current->getPrice() << endl;

    // change the state of the chef
    current = nullptr;
    startPrepTime = FREE;
    purge();
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

void Simulation::wrapper(Meal *meal) {
    cout << "TIME:" << time << ", Foodorder: " << meal->getOrderId();
}

void Simulation::end() {
    cout << ".. simulation ended." << endl;
    cout << "- Total number of orders completed: " << numOrders << endl;
    cout << "- Total revenue: $" << revenue << endl;
}

