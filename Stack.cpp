/*************************************************************************
 * @class Stack
 * @author Gundeep Singh Sidhu
 *
 * @section DESCRIPTION
 * The Stack class represents a stack and will be used to handle the
 * orders in the last-come first-served Simulation.
 *************************************************************************/

#include "Stack.h"


//constructor
Stack::Stack() : Linkedlist() {}

/************************************************************************
 * PURPOSE: This function add an item to the stack
 * @param toAdd The node to be added at the top of the stack.
 ************************************************************************/
void Stack::push(Node *toAdd) {
    addItem(toAdd);
}

/****************************************************************************
 * PURPOSE: This function removes and returns the first item from the stack
 * @return Node that is returns at the top of the stack
 ****************************************************************************/
Node *Stack::pop() {
    Node * temp = getHead();
    deletes(temp);
    return temp;
}

/**********************************************************************
 * PURPOSE: This function add an item to the stack
 * @return Node that is returns at the top of the stack
 **********************************************************************/
Node *Stack::peek() {
    return getHead();
}

/**********************************************************************
 * PURPOSE: This function add an item to the stack
 * @return true if the the stack is empty
 * @return false if the stack is not empty
 **********************************************************************/
bool Stack::isEmpty() {
    return getHead()==nullptr;
}



