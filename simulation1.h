/*************************************************************************
 * @simulation1
 * @author Gundeep Singh Sidhu
 * ASSIGNMENT : 2
 * SECTION : COMP2150 A01
 * STUDENT ID: 7885100
 *
 * @section DESCRIPTION
 * This class implements the first-come first-served simulation
 *************************************************************************/

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