/*************************************************************************
 * @simulation3
 * @author Gundeep Singh Sidhu
 * ASSIGNMENT : 2
 * SECTION : COMP2150 A01
 * STUDENT ID: 7885100
 *
 * @section DESCRIPTION
 * This class implements the revenue maximizing simulation
 *************************************************************************/

#pragma once

#include "Simulation.h"

class simulation3 : public Simulation {
private:
    Node * whereAdd(Node*);

public:
    simulation3();

    void add(Node *) override;
    Node *remove() override;

};
