/*************************************************************************
 * @Meal
 * @author Gundeep Singh Sidhu
 * ASSIGNMENT : 2
 * SECTION : COMP2150 A01
 * STUDENT ID: 7885100
 *
 * @section DESCRIPTION
 * The Meal class represent a meal that stores
 * order number, expiry time, meal name, number of ingredients, time it was
 * ordered at and the price of the meal
 *************************************************************************/

#pragma once
#include <string>
using namespace std;

#include "Listitem.h"

class Meal : public Listitem {
private:
    int orderId;
    int expiry;
    string meal;
    int ingridients;
    int prepTime;
    float price;
public:

    //constructor
    Meal(int orderNum, int exp, string meal, int indg, int time, float prices);

    // getters
    float getPrice();
    int getOrderId();
    int getExpiry();
    void setOrderId(int id);
    int getPrepTime();

    // prints when the order is
    void toString();
};