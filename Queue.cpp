/*************************************************************************
 * @Queue
 * @author Gundeep Singh Sidhu
 *
 * @section DESCRIPTION
 * The Queue class represents a queue where items enter from one end, and
 * leave from the other end.
 *************************************************************************/

#include "Queue.h"

Queue::Queue() : Linkedlist() {}

// item will enter the queue
void Queue::enter(Node *toAdd) {
    addItem(toAdd);
}

// exit the queue
Node * Queue::leave() {
    return deleteLast();
}


// check is the queue is empty
bool Queue::isEmpty() {
    return Linkedlist::isEmpty();
}
