/*************************************************************************
 * @simulation2
 * @author Gundeep Singh Sidhu
 * ASSIGNMENT : 2
 * SECTION : COMP2150 A01
 * STUDENT ID: 7885100
 *
 * @section DESCRIPTION
 * This class implements the last-come first-served simulation
 *************************************************************************/


#include "simulation2.h"
#include "Stack.h"

//constructor
simulation2::simulation2() : Simulation(new Stack()) {}

// add the node to the stack
void simulation2::add(Node* toAdd) {
    dynamic_cast<Stack *>(getList())->push(toAdd);
}

Node * simulation2::remove() {
    return dynamic_cast<Stack *>(getList())->pop();
}
