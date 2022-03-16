/*************************************************************************
 * @class Queue
 * @author Gundeep Singh Sidhu
 *
 * @section DESCRIPTION
 * The Stack class represents a stack and will be used to handle the
 * events in the last-come first-served Simulation.
 *************************************************************************/

#pragma once
#include "Stack.h"

class Queue : public Stack{

private:
    Node *last;

public:
    Queue();

    void enterQueue(Node*);
    Node *leaveQueue();
    bool isEmpty();

};
