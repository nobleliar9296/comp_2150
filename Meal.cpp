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

#include <iostream>
#include "Meal.h"

Meal::Meal(int orderNum, int exp, string meals, int indg, int times, float prices) {
    orderId=orderNum;
    expiry = exp;
    price = prices;
    meal = meals;
    ingridients = indg;
    prepTime = times;
}

//setter and getters
void Meal::setOrderId(int id) {
    orderId = id;
}

int Meal::getPrepTime() {
    return prepTime;
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

// prints the meal details
void Meal::toString() {
    cout << "Expiry: " << expiry << " - Meal: " << meal << " - Ingredients: " << ingridients << " - prepTime: " << prepTime << " - Price: $" << price;
}