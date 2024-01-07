#include <iostream>
#include "retg.h"

void Retangle::setHeigth(int v){

    heigth = v;

}

void Retangle::setWidth(int v){

    width = v;

}

int Retangle::getTotalArea(){

    return width * heigth;

}

int Retangle::getHeigth(){

    return heigth;

}

int Retangle::getWidth(){

    return width;

}