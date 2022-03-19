//
// Created by gunde on 3/15/2022.
//

#include "Queue.h"
#include "Node.h"

Queue::Queue() : Linkedlist() {}

// item will enter the queue
void Queue::enter(Node *toAdd) {
    addItem(toAdd);
}

// exit the queue
Node * Queue::leave() {
    return deleteLast();
}

Node * Queue::toLeave() {
    return getLast();
}

// check is the queue is empty
bool Queue::isEmpty() {
    return Linkedlist::isEmpty();
}
