//
// Created by admin on 2/20/2026.
//

#ifndef UNTITLED1_ANIMAL_H
#define UNTITLED1_ANIMAL_H

#include<iostream>
class Animal {

public:
    virtual void speak() {
        std::cout<<"Animal makes a sound"<<"\n";
    }


    virtual~Animal(){}
};


#endif //UNTITLED1_ANIMAL_H