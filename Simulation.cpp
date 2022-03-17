//
// Created by gunde on 3/16/2022.
//

#include <iostream>
#include "Simulation.h"

// the time and price of all the dishes
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
// it will be better to store in a csv file for longer list and make a hashtable at run time

Simulation::Simulation() : orderId(1), numOrders(0), time(0), revenue(0), events(new PriorityQueue()) {}

void Simulation::read(int exp, string meal, int indg, int time) {
    float price;
    if (meal.compare(SALAD)) {
        price = SALAD_COST;
    } else if (meal.compare(BURGER) ) {
        price = BURGER_COST;
    } else if ( meal.compare(PIZZA) ) {
        price = PIZZA_COST;
    } else if ( meal.compare(STEW) ) {
        price = STEW_COST;
    } else {
        cerr << "Error: Meal name not found" << endl;
        exit(-1);
    }
}


