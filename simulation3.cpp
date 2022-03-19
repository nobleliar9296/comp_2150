/*************************************************************************
 * @simulation3
 * @author Gundeep Singh Sidhu
 * ASSIGNMENT : 2
 * SECTION : COMP2150 A01
 * STUDENT ID: 7885100
 *
 * @section DESCRIPTION
 * This class implements the revenue maximizing simulation
 *************************************************************************/

#include "simulation3.h"
#include "Node.h"
#include "Meal.h"

//constructor
simulation3::simulation3() : Simulation(new PriorityQueue()) {}

/**************************************************************************************
* @Purpose: this adds the node in an increasing order to the queue
 *
 *@param meal: the meal that need to be added to the list
*************************************************************************************/
void simulation3::add(Node* toAdd) {
    if (whereAdd(toAdd) == nullptr) {
        dynamic_cast<PriorityQueue *>(getList())->addLast(toAdd);
        return;
    }
    dynamic_cast<PriorityQueue *>(getList())->addbefore(toAdd, whereAdd(toAdd));
}

/**************************************************************************************
* @Purpose: this removes the last item in the queue
 *
 *@return the item that is removed from the queue.
*************************************************************************************/
Node * simulation3::remove() {
    return dynamic_cast<PriorityQueue *>(getList())->deleteLast();
}

/**************************************************************************************
* @Purpose: this gives the node that adds the node in an increasing order to the queue
 *
 *@param meal: the meal that need to be added to the list
 *
 * @return the node to which before to add the node passed in
 *         if nullptr is returned then the node is biggest or the list is empty
*************************************************************************************/
Node *simulation3::whereAdd(Node* toAdd) {
    PriorityQueue *temp = dynamic_cast<PriorityQueue*>(getList());
    Node* iter = temp->getHead();

    // iter until the right position found
    while (iter != nullptr) {
        if ( dynamic_cast<Meal *>(iter->getValue())->getPrice() > dynamic_cast<Meal*>(toAdd->getValue())->getPrice() ) {
            return iter;
        }
        iter = iter->getNext();
    }

    // return null if the meal is most expensive or list is empty
    return nullptr;
}