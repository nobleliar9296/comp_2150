//
// Created by gunde on 3/15/2022.
//

#include "Queue.h"
#include "Node.h"

Queue::Queue() : list( new Linkedlist() ){}

void Queue::enter(Node *toAdd) {
    list->addItem(toAdd);
}

Node * Queue::leave() {
    return list->deleteLast();

}

bool Queue::isEmpty() {
    return ( peek() == nullptr );
}
