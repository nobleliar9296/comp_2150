/*************************************************************************
 * @class Stack
 * @author Gundeep Singh Sidhu
 *
 * @section DESCRIPTION
 * The Stack class represents a stack and will be used to handle the
 * events in the last-come first-served Simulation.
 *************************************************************************/

#include "Stack.h"
#include "Linkedlist.h"

#include <iostream>
using namespace std;


//constructor
Stack::Stack() {
    list = new Linkedlist();
}

/************************************************************************
 * PURPOSE: This function add an item to the stack
 * @param toAdd The node to be added at the top of the stack.
 ************************************************************************/
void Stack::push(Node *toAdd) {
    list->addItem(toAdd);
}

/****************************************************************************
 * PURPOSE: This function removes and returns the first item from the stack
 * @return Node that is returns at the top of the stack
 ****************************************************************************/
Node *Stack::pop() {
    Node * temp = list->getHead();
    list->deletes(temp);
    return temp;
}

/**********************************************************************
 * PURPOSE: This function add an item to the stack
 * @return Node that is returns at the top of the stack
 **********************************************************************/
Node *Stack::peek() {
    return list->getHead();
}

/**********************************************************************
 * PURPOSE: This function add an item to the stack
 * @return true if the the stack is empty
 * @return false if the stack is not empty
 **********************************************************************/
bool Stack::isEmpty() {
    return list->getHead()==nullptr;
}


// For debugging purposes
void Stack::toString() {
    list->toString();
}


