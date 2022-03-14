//
// Created by gunde on 3/12/2022.
//

#include "Node.h"
#include "Listitem.h"


#include<iostream>
using namespace std;




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


