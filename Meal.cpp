//
// Created by gunde on 3/16/2022.
//

#include <iostream>
#include "Meal.h"

Meal::Meal(int orderNum, int exp, string meals, int indg, int times, float prices) {
    orderId=orderNum;
    expiry = exp;
    price = prices;
    meal = meals;
    ingridients - indg;
    time = times;
}

int Meal::getOrderId() {
    return orderId;
}

int Meal::getExpiry() {
    return expiry;
}

float Meal::getPrice() {
    return price;
}

void Meal::toString() {
    cout << "Expiry:" << expiry << " - Meal:" << meal << " - Ingredients:" << ingridients << " - Prep time: " << time << " - Price:" << price;
}