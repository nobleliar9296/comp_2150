//
// Created by gunde on 3/12/2022.
//


#pragma once

class Listitem;


class Node {

private:
    Listitem* value;
    Node* next;

public:
    // constructors
    Node();
    Node(Listitem*, Node*);

    // setters
    void setNext(Node*);
    void setValue(Listitem*);

    // getters
    Node* getNext();
    Listitem* getValue();

    // print is optional to implement
    void print();

    void toString();
};
