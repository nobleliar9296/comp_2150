/*************************************************************************
 * @simulation1
 * @author Gundeep Singh Sidhu
 * ASSIGNMENT : 2
 * SECTION : COMP2150 A01
 * STUDENT ID: 7885100
 *
 * @section DESCRIPTION
 * This class implements the first-come first-served simulation
 *************************************************************************/


#include "simulation1.h"

//constructor
simulation1::simulation1() : Simulation(new Queue()) {}

// add the node to queue
void simulation1::add(Node* toAdd) {
    dynamic_cast<Queue *>(getList())->enter(toAdd);
}

// remove the node from a queue
// returns the node removed from the queue
// returns null if it is empty
Node * simulation1::remove() {
    return dynamic_cast<Queue *>(getList())->leave();
}