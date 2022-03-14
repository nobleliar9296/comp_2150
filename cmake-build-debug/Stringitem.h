//
// Created by gunde on 3/12/2022.
//

#pragma once

#include "Listitem.h"
#include <iostream>
using namespace std;

class Stringitem : public Listitem {

private :
    string strings;

public:
    Stringitem();
    Stringitem(string);

    string getString();

    void toString();
};