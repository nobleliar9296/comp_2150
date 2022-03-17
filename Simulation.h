//
// Created by gunde on 3/16/2022.
//

#pragma once
#include <string>
#include "PriorityQueue.h"

using namespace std;

class Simulation {
private:
    int numOrders;
    int revenue;
    int time;
    PriorityQueue *events;

public:

    Simulation();

    void read(string);

    void toString();
};