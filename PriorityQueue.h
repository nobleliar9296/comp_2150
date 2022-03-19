/*************************************************************************
 * @PriorityQueue
 * @author Gundeep Singh Sidhu
 *
 * @section DESCRIPTION
 * The PriorityQueue class represents a queue that can insert items anywhere
 * in the queue
 *************************************************************************/

#pragma once

#include "Linkedlist.h"

class PriorityQueue: public Linkedlist {

public:

    //constructor
    PriorityQueue();

    // methods
    void add(Node *, Node *);

    //polymorphic methoods
    void addLast(Node *) override;
    Node *deletes(Node*) override;

};
