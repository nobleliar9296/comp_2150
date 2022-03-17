

#pragma once

#include "Queue.h"

class PriorityQueue : public Queue {

private:


public:

    PriorityQueue();

    void add(Node *, Node *);
    void addLast(Node *);
    Node *deletes(Node*);

};
