/*************************************************************************
 * @simulation2
 * @author Gundeep Singh Sidhu
 * ASSIGNMENT : 2
 * SECTION : COMP2150 A01
 * STUDENT ID: 7885100
 *
 * @section DESCRIPTION
 * This class implements the last-come first-served simulation
 *************************************************************************/

#pragma once

#include "Simulation.h"

class simulation2 : public Simulation {

public:
    simulation2();

    void add(Node *) override;
    Node *remove() override;

};

