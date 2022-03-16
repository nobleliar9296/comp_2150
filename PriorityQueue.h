

#pragma once

#include "Queue.h"

class PriorityQueue : public Queue {

private:


public:

    PriorityQueue();

    void addLast(Node *);
    void addBefore(Node *, Node *);
    Node *deletes(Node*);

};
