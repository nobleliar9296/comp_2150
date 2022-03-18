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
    int revenue;
    int time;
    Queue *events;
    Meal *current;
    int startPrepTime;

public:

    Simulation();

    void read(string);

    void read(int exp, string meals, int indg, int times);

    void arrival(Meal*);
    void preperation();
    void CompleteService();
    void process(Meal*);
    void wrapper(Meal*);

    void purge();

    void end();
};