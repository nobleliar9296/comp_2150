/*************************************************************************
 * @ListItem
 * @author Gundeep Singh Sidhu
 * ASSIGNMENT : 2
 * SECTION : COMP2150 A01
 * STUDENT ID: 7885100
 *
 * @section DESCRIPTION
 * This class helps us store data in the linked list
 *************************************************************************/

#include "Node.h"
#include "Listitem.h"

// constructors
Node::Node() {
    value = nullptr;
    next = nullptr;
}

Node::Node(Listitem *val, Node *toNext) : value(val), next(toNext) {}

// getters
Node* Node::getNext() {
    return next;
}

Listitem *Node::getValue() {
    return value;
}


// setters
void Node::setNext(Node *toAdd) {
    next = toAdd;
}

void Node::setValue(Listitem *val) {
    value = val;
}


// print method
void Node::print() {
    value->toString();
}

void Node::toString() {
    value->toString();
}


