//
// Created by gunde on 3/15/2022.
//

#include "PriorityQueue.h"

PriorityQueue::PriorityQueue() : Linkedlist() {}

/***************************************************************************
 * Purpose: add the node passed in to the last of the list
 * @param
 *      toAdd: the node to be added to the end of the list
 **************************************************************************/
void PriorityQueue::addLast(Node *toAdd) {
    Linkedlist::addLast(toAdd);
}

/***************************************************************************
 * Purpose: this function adds the node passed in before the node given
 * @param
 *      toAdd : this is the node to add to the list
 *      before: this node indicates that the node to add goes before this
 *              node.
 * This function also checks that toAdd and before are not null
 **************************************************************************/
void PriorityQueue::add(Node *toAdd, Node *before) {
    Linkedlist::addbefore(toAdd, before);
}

// delete the item in the linked-list
Node* PriorityQueue::deletes(Node *toDelete) {
    return Linkedlist::deletes(toDelete);
}

