//
// Created by gunde on 3/16/2022.
//

#include "simulation2.h"
#include "Stack.h"

simulation2::simulation2() : Simulation(new Stack()) {}

void simulation2::add(Node* toAdd) {
    dynamic_cast<Stack *>(getList())->push(toAdd);
}

Node * simulation2::remove() {
    return dynamic_cast<Stack *>(getList())->pop();
}
