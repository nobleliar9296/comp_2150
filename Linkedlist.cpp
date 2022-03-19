/****************************************************************************
* ASSIGNMENT 2
* NAME   :  GUNDEEP SINGH SIDHU
* CLASS  :  COMP 2150 A01
* STUDENT NUMBER : 7885100
* PURPOSE : this class implements a linked list which will be used by
*           Stack, Queue and Priority queue class
*
****************************************************************************/

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
    if (toAdd == nullptr) {
        return;
    }
    toAdd->setNext(nullptr);

    if (head == nullptr) {
        head = toAdd;
        last = toAdd;
        return;
    }

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

/**************************************************************************************
 * Purpose: this function deletes the node passed in from the list if it exists
 * It is slighly long as the linked list stores both the start and last nodes
 * @param
 *      toDelete : this is the node that is deleted from the list
 *
 * @returns the node that is found and deleted
 *************************************************************************************/
Node* Linkedlist::deletes(Node *toDelete) {

    // this is the value of rtn
    Node *rtn;

    // if just one element in the list
    if (head == last && head == toDelete) {
        rtn = head;
        head = nullptr;
        last = nullptr;
        return rtn;
    }

    // if it is the first in the list
    if (head == toDelete) {
        rtn = head;
        head = rtn->getNext();
        return rtn;
    }

    // if it is last in the list
    if (last == toDelete) {
        Node *temp = head;

        // get to the second last
        while (head->getNext()->getNext() != nullptr) {
            temp = temp->getNext();
        }

        // make the second last node the last node in the list
        rtn = temp->getNext();
        temp->setNext(nullptr);
        last = temp;
        return rtn;
    }

    // setup nodes to delete in the middle of the list
    Node *iter = head;
    Node *prev = head;

    // iterate until found or at the end of the list
    while (iter != toDelete && iter != nullptr) {
        prev = iter;
        iter = iter->getNext();
    }

    // item does not exist
    if (iter == nullptr) {
        return nullptr;
    }

    // if found and not first of last i.e. in the middle
    prev->setNext(iter->getNext());
    iter->setNext(nullptr);
    return iter;

}

/**************************************************************************************
 * Purpose: this function deletes the last node passed in from the list/ if it exists
 *
 * @returns the node that is deleted
 *************************************************************************************/
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
    Node *prev = head;

    while(iter->getNext()!= nullptr) {
        prev = iter;
        iter = iter->getNext();
    }

    last = prev;
    Node *temp = last->getNext();
    last->setNext(nullptr);

    return temp;

}

// getters for head and last nodes
Node * Linkedlist::getHead() {
    return head;
}

Node * Linkedlist::getLast() {
    return last;
}


// prints the linked list
void Linkedlist::toString() {

    Node *iter = head;

    while(iter != nullptr) {
        //
        iter->toString();
        iter = iter->getNext();
    }

}

/**************************************************************************************
 * Purpose: Checks if the list is empty
 * @returns true if the list is empty
 *          false, otherwise
 *************************************************************************************/
bool Linkedlist::isEmpty() {
    return head== nullptr;
}
