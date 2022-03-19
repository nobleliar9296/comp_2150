//
// Created by gunde on 3/16/2022.
//

#include "simulation1.h"

simulation1::simulation1() : Simulation(new Queue()) {}

void simulation1::add(Node* toAdd) {
    dynamic_cast<Queue *>(getList())->enter(toAdd);
}

Node * simulation1::remove() {
    return dynamic_cast<Queue *>(getList())->leave();
}