//
// Created by gunde on 3/16/2022.
//

#pragma once
#include <string>
#include "PriorityQueue.h"
#include "Meal.h"

#include "Simulation.h"
#include "Queue.h"

class simulation1 : public Simulation {


public:
    simulation1();

    void add(Node *) override;
    Node *remove() override;
};