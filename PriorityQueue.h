

#pragma once

#include "Queue.h"

class PriorityQueue{

private:
    Linkedlist *list;

public:

    PriorityQueue();

    void add(Node *, Node *);
    void addLast(Node *);
    Node *deletes(Node*);

};
