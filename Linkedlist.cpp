//
// Created by gunde on 3/12/2022.
//

#include "Linkedlist.h"
#include "Node.h"

//constructor
Linkedlist::Linkedlist() : head(nullptr), last(nullptr) {}

/**************************************************************************
 * purpose: add the item to the beginning of the list
 * @param
 *      toAdd: the node to add to the list
 */
void Linkedlist::addItem(Node *toAdd) {

    // invairent
    toAdd->setNext(nullptr);

    if ( head == nullptr ) {
        head = toAdd;
        last = toAdd;
        return;
    }

    //point the item to add to the next item
    toAdd->setNext(head);
    head = toAdd; // point the head to the new item
}

/***************************************************************************
 * Purpose: add the node passed in to the last of the list
 * @param
 *      toAdd: the node to be added to the end of the list
 **************************************************************************/
void Linkedlist::addLast(Node *toAdd) {
    // invariant checks
    if (toAdd != nullptr) {

    }
    toAdd->setNext(nullptr);

    // add to the last of the list
    last->setNext(toAdd);
    last = toAdd;
}

/***************************************************************************
 * Purpose: this function adds the node passed in before the node given
 * @param
 *      toAdd : this is the node to add to the list
 *      before: this node indicates that the node to add goes before this
 *              node.
 * This function also checks that toAdd and before are not null
 **************************************************************************/
void Linkedlist::addbefore(Node *toAdd, Node *before) {

    // invariant check
    if (toAdd == nullptr || before == nullptr) {
        return;
    }

    // check of the list is empty
    if (head == nullptr) {
        return;
    }

    // if to add before the first element
    if (head == before) {
        addItem(toAdd);
        return;
    }

    // counter to help iterate over the loop :)
    Node *iter = head;
    Node *prev = nullptr;

    // if before is b/w the first and last element
    while (iter != nullptr) {
        if (iter == before) {
            toAdd->setNext(iter);
            prev->setNext(toAdd);
            return;
        }
        prev = iter;
        iter = iter->getNext();
    }
}

Node* Linkedlist::deletes(Node *toDelete) {

    // this is the value of rtn
    Node *rtn;

    Node *iter = head;
    Node *prev = nullptr;

    if (head == last) {
        rtn = head;
        head = nullptr;
        last = nullptr;
        return rtn;
    }

    while (iter != toDelete && iter != nullptr) {
        prev = iter;
        iter = iter->getNext();
    }

    // if the case where it is the last element in the list
    if (iter->getNext() == nullptr) {
        last = prev;
        prev->setNext(nullptr);
        return iter;
    }

    // when it is not last element in the list
    prev->setNext(prev->getNext()->getNext());
    return iter;

}


Node* Linkedlist::deleteLast() {

    if (head == nullptr) {
        return nullptr;
    }

    if (head == last) {
        Node *temp = head;
        head = nullptr;
        last = nullptr;
        return temp;
    }

    Node *iter = head;
    Node *prev = nullptr;

    while(iter->getNext()!= nullptr) {
        prev = iter;
        iter = iter->getNext();
    }

    last = prev;
    Node *temp = last->getNext();
    last->setNext(nullptr);

    return temp;

}


void Linkedlist::toString() {

    Node *iter = head;

    while(iter != nullptr) {
        //
        iter->toString();
        iter = iter->getNext();
    }

}