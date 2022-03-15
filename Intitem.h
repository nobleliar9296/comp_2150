//
// Created by gunde on 3/12/2022.
//


#pragma once

#include "Listitem.h"

class Intitem : public Listitem {

private:
    int val;

public:
    Intitem(int);

    void toString();

};