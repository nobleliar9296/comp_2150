/*************************************************************************
 * @Stack
 * @author Gundeep Singh Sidhu
 *
 * @section DESCRIPTION
 * The Stack class represents a stack and will be used to handle the
 * events in the last-come first-served Simulation.
 *************************************************************************/

#pragma once

class Node;

class Stack {

private:
    Node *head;

public :

    Stack();

    // stack operations
    void push(Node*);
    Node *pop();
    Node *peek();

    bool isEmpty();

    // prints the stack for debugging
    void toString();


};