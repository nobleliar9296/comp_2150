//
// Created by gunde on 3/12/2022.
//

#include "Intitem.h"

#include<iostream>
using namespace std;

Intitem::Intitem(int cal) {
    val = cal;
}

void Intitem::toString() {
    cout << val << endl;
}