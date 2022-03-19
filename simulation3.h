//
// Created by gunde on 3/16/2022.
//

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
