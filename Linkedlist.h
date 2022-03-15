//
// Created by gunde on 3/12/2022.
//


#pragma once

class Node;


class Linkedlist {

private :
    Node *head;
    Node *last;

public :
    Linkedlist();

    // setters
    void addItem(Node *toAdd);

    void addbefore(Node *toAdd, Node *before);
    void addLast(Node *toAdd);
    Node* deleteLast();
    Node* deletes(Node*);

    void toString();

};