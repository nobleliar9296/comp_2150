//
// Created by gunde on 3/15/2022.
//

#include "Queue.h"
#include "Node.h"

Queue::Queue() : Stack() {
    last = nullptr;
}

void Queue::enterQueue(Node *toAdd) {

    // adds at the front
    push(toAdd);
}

Node * Queue::leaveQueue() {

    Node *iter = peek();
    Node *prev = nullptr;

    // check if the queue is not already empty
    if (iter == nullptr) {
        return nullptr;
    }

    // if only one item in queue
    if (iter->getNext() == nullptr) {
        return pop();
    }

    while (iter->getNext() != nullptr) {
        prev = iter;
        iter = iter->getNext();
    }

    prev->setNext(nullptr);
    return iter;
}

bool Queue::isEmpty() {
    return ( (peek() == nullptr) && (last == nullptr) );
}
