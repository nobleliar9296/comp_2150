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
