//
// Created by gunde on 3/16/2022.
//

#pragma once
#include <string>
#include "PriorityQueue.h"
#include "Meal.h"

using namespace std;

class Simulation {
private:
    int orderId;  // order num
    int numOrders; // number of orders served
    float revenue; // total revenue from the orders served
    int time; // the time in the simulation
    Linkedlist *orders; // the list o orders
    Meal *current;  // which order the chef is working on
    int startPrepTime; // the time at which the current order started at
    int lastend;  // the time at which the previous order was served

    // methods to process data
    void prepare();  //
    void arrival(Meal *meal);
    void process(Meal*);
    void completeService();


public:
    Simulation(Linkedlist*);

    // parses and processes the input
    void read(int exp, string meals, int indg, int times);

    // ends the simulation by printing statistics
    void end();

    // after there are no more entries in the file; run this to clear
    // orders in the program
    void finishOrders();

    // these are polymorphic methods that add and remove orders
    // from the list, according to the simulation version
    virtual void add(Node*) = 0;
    virtual Node *remove() = 0;

    // returns the list of orders
    Linkedlist *getList();
};