//
// Created by gunde on 3/16/2022.
//

#pragma once

#include "Simulation.h"

class simulation2 : public Simulation {

public:
    simulation2();

    void add(Node *) override;
    Node *remove() override;

};

