//
// Created by admin on 2/20/2026.
//

#ifndef UNTITLED1_AMPHIBIAN_H
#define UNTITLED1_AMPHIBIAN_H
#include "Walker.h"
#include "Swimmer.h"


class Amphibian : public Walker, public Swimmer{
public:
    int age;

};


#endif //UNTITLED1_AMPHIBIAN_H