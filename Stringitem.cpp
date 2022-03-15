//
// Created by gunde on 3/12/2022.
//

#include "Stringitem.h"

Stringitem::Stringitem() {
    strings = nullptr;
}

Stringitem::Stringitem(string str) {
    strings = str;
}

void Stringitem::toString() {
    cout << strings << endl;
}