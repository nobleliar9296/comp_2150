/*************************************************************************
 * @class Queue
 * @author Gundeep Singh Sidhu
 *
 * @section DESCRIPTION
 * The Stack class represents a stack and will be used to handle the
 * orders in the last-come first-served Simulation.
 *************************************************************************/

#pragma once

#include "Linkedlist.h"

class Queue : public Linkedlist{


public:
    //constructors
    Queue();

    //methods
    void enter(Node*);
    Node *leave();

    //polymorphic method
    bool isEmpty() override;

};
