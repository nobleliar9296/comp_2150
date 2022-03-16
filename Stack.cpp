/*************************************************************************
 * @class Stack
 * @author Gundeep Singh Sidhu
 *
 * @section DESCRIPTION
 * The Stack class represents a stack and will be used to handle the
 * events in the last-come first-served Simulation.
 *************************************************************************/

#include "Stack.h"
#include "Node.h"

#include <iostream>
using namespace std;


//constructor
Stack::Stack() {
    head = nullptr;
}

/************************************************************************
 * PURPOSE: This function add an item to the stack
 * @param toAdd The node to be added at the top of the stack.
 ************************************************************************/
void Stack::push(Node *toAdd) {

    // invariant
    toAdd->setNext(nullptr);

    if ( head == nullptr ) {
        head = toAdd;
        return;
    }

    //point the item to add to the next item
    toAdd->setNext(head);
    head = toAdd; // point the head to the new item
}

/****************************************************************************
 * PURPOSE: This function removes and returns the first item from the stack
 * @return Node that is returns at the top of the stack
 ****************************************************************************/
Node *Stack::pop() {

    if (head == nullptr) {
        return nullptr;
    }

    Node *temp = head;
    head = temp->getNext();

    return temp;
}

/**********************************************************************
 * PURPOSE: This function add an item to the stack
 * @return Node that is returns at the top of the stack
 **********************************************************************/
Node *Stack::peek() {
    return head;
}

/**********************************************************************
 * PURPOSE: This function add an item to the stack
 * @return true if the the stack is empty
 * @return false if the stack is not empty
 **********************************************************************/
bool Stack::isEmpty() {
    return head==nullptr;
}


// For debugging purposes
void Stack::toString() {

    cout << "Start of the stack" << endl;

    Node *iter = head;

    while(iter != nullptr) {
        iter->toString();
        iter = iter->getNext();
    }

    cout << "end of the stack" << endl;

}


