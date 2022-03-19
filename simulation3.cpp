//
// Created by gunde on 3/16/2022.
//

#include "simulation3.h"
#include "Node.h"
#include "Meal.h"

simulation3::simulation3() : Simulation(new PriorityQueue()) {}

void simulation3::add(Node* toAdd) {
    if (whereAdd(toAdd) == nullptr) {
        dynamic_cast<PriorityQueue *>(getList())->addLast(toAdd);
        return;
    }
    dynamic_cast<PriorityQueue *>(getList())->addbefore(toAdd, whereAdd(toAdd));
}

Node * simulation3::remove() {
    return dynamic_cast<PriorityQueue *>(getList())->deleteLast();
}

Node *simulation3::whereAdd(Node* toAdd) {
    PriorityQueue *temp = dynamic_cast<PriorityQueue*>(getList());
    Node* iter = temp->getHead();

    while (iter != nullptr) {
        if ( dynamic_cast<Meal *>(iter->getValue())->getPrice() < dynamic_cast<Meal*>(toAdd->getValue())->getPrice() ) {
            return iter;
        }
        iter = iter->getNext();
    }
    return nullptr;
}