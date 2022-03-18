/*************************************************************************
 * @class Queue
 * @author Gundeep Singh Sidhu
 *
 * @section DESCRIPTION
 * The Stack class represents a stack and will be used to handle the
 * events in the last-come first-served Simulation.
 *************************************************************************/

#pragma once

#include "Linkedlist.h"

class Queue{

private:
    Linkedlist *list;

public:
    Queue();

    void enter(Node*);
    Node *leave();
    bool isEmpty();

    Node *toLeave();
};
