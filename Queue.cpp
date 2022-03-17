//
// Created by gunde on 3/15/2022.
//

#include "Queue.h"
#include "Node.h"

Queue::Queue() : list( new Linkedlist() ){}

// item will enter the queue
void Queue::enter(Node *toAdd) {
    list->addItem(toAdd);
}

// exit the queue
Node * Queue::leave() {
    return list->deleteLast();
}

// check is the queue is empty
bool Queue::isEmpty() {
    return list->isEmpty();
}
