//
// Created by gunde on 3/15/2022.
//

#include "PriorityQueue.h"
#include "Node.h"

PriorityQueue::PriorityQueue() : Queue() {}

/***************************************************************************
 * Purpose: add the node passed in to the last of the list
 * @param
 *      toAdd: the node to be added to the end of the list
 **************************************************************************/
void PriorityQueue::addLast(Node *toAdd) {

    Node *iter = peek();

    while(iter->getNext() != nullptr) {
        iter = iter->getNext();
    }

    iter->setNext(toAdd);
}

/***************************************************************************
 * Purpose: this function adds the node passed in before the node given
 * @param
 *      toAdd : this is the node to add to the list
 *      before: this node indicates that the node to add goes before this
 *              node.
 * This function also checks that toAdd and before are not null
 **************************************************************************/
void PriorityQueue::addBefore(Node *toAdd, Node *before) {

    Node *temp = peek();

    // invariant check
    if (toAdd == nullptr || before == nullptr) {
        return;
    }

    // check of the list is empty
    if ( isEmpty() ) {
        return;
    }

    // if to add before the first element
    if ( temp == before) {
        push(toAdd);
        return;
    }

    // counter to help iterate over the loop :)
    Node *iter = temp;
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


Node* PriorityQueue::deletes(Node *toDelete) {

    // this is the value of rtn
    Node *rtn;

    Node *temp = peek();

    Node *iter = temp;
    Node *prev = nullptr;

    if (temp == toDelete) {
        return pop();
    }

    while (iter != toDelete && iter != nullptr) {
        prev = iter;
        iter = iter->getNext();
    }

    // if the case where it is the last element in the list
    if (iter->getNext() == nullptr) {
        if ()
        last = prev;
        prev->setNext(nullptr);
        return iter;
    }

    // when it is not last element in the list
    prev->setNext(prev->getNext()->getNext());
    return iter;

}

