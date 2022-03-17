//
// Created by gunde on 3/16/2022.
//

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
    int time;
    float price;
public:

    //constructor
    Meal(int orderNum, int exp, string meal, int indg, int time, float prices);

    // getters
    float getPrice();
    int getOrderId();
    int getExpiry();

    // prints when the order is
    void toString();
};