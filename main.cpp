#include <iostream>
#include"Animal.h"
#include"Dog.h"
#include"Cat.h"
#include "BabyDog.h"
#include "Amphibian.h"
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    Animal *ptr1= new Dog();
    Animal *ptr2= new Cat();

    Amphibian a;
    a.age=5;

    //answering question 7


    Animal *ptr3 = new BabyDog();


    ptr1->speak();
    ptr2->speak();
    ptr3->speak();


}