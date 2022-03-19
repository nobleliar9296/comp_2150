

#pragma once

#include "Linkedlist.h"

class PriorityQueue: public Linkedlist {

public:

    PriorityQueue();

    void add(Node *, Node *);
    void addLast(Node *) override;
    Node *deletes(Node*) override;

};
