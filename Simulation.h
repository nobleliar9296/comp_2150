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
    int orderId;
    int numOrders;
    float revenue;
    int time;
    Linkedlist *events;
    Meal *current;
    int startPrepTime;
    int lastend;

public:

    Simulation(Linkedlist*);

    void read(string);

    void read(int exp, string meals, int indg, int times);

    void arrival(Meal *meal);
    void preperation();
    void CompleteService();
    void process(Meal*);
    void wrapper(Meal*);


    void end();

    void newOrder(Meal *meal);

    void finishOrders();

    virtual void add(Node*) = 0;
    virtual Node *remove() = 0;

    Linkedlist *getList();
};