/*************************************************************************
 * @Stack
 * @author Gundeep Singh Sidhu
 *
 * @section DESCRIPTION
 * The Stack class represents a stack and will be used to handle the
 * events in the last-come first-served Simulation.
 *************************************************************************/

#pragma once

#include "Linkedlist.h"

class Stack : public Linkedlist {


public :

    Stack();

    // stack operations
    void push(Node*);
    Node *pop();
    Node *peek();

    bool isEmpty() override;


};