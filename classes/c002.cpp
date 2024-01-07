#include <iostream>
#include "retg.h"

int main(){

    Retangle *ret = nullptr;
    ret = new Retangle;

    ret->setHeigth(30);
    ret->setWidth(75);

    std::cout << ret->getTotalArea();

    return 0;

}