/****************************************************************************
* ASSIGNMENT : 2
* NAME       : GUNDEEP SINGH SIDHU
* CLASS      : COMP 2150 A01
* SID NUMBER : 7885100
* PURPOSE    : this class implements a linked list which will be used by
*              Stack, Queue and Priority queue class
*
****************************************************************************/

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

    virtual void addLast(Node *toAdd);
    Node* deleteLast();

    virtual Node* deletes(Node*);
    Node *getHead();

    virtual bool isEmpty();

    virtual void toString();

    Node *getLast();
};