//
// Created by gunde on 3/15/2022.
//

#include "PriorityQueue.h"
#include "Node.h"

PriorityQueue::PriorityQueue() {
    list = new Linkedlist();
}

/***************************************************************************
 * Purpose: add the node passed in to the last of the list
 * @param
 *      toAdd: the node to be added to the end of the list
 **************************************************************************/
void PriorityQueue::addLast(Node *toAdd) {
    list->addLast(toAdd);
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
    list->addbefore(toAdd, before);
}


Node* PriorityQueue::deletes(Node *toDelete) {
    return list->deletes(toDelete);
}

