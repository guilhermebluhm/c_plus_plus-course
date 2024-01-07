#include <iostream>
#include <cstdlib>
#include "integerList.h"

integerList::integerList(int size){

    list = new int[size];
    sizeList = size;
    for(size_t i {} ; i < sizeList ; i+=1){
        list[i] = 0;
    }

}

integerList::~integerList(){
    delete [] list;
}

bool integerList::isValidPosition(int n) const {

    if(n <= sizeList - 1)
        return true;
    return false;

}

int integerList::getElement(int v){

    if(isValidPosition(v)){
        return list[v];
    }
    return -1;

}

void integerList::setElement(int p){

    int it = 0;
    bool found = false;

    for(size_t i {} ; i < sizeList ; i+=1){

        if(list[i] == 0){
            found = true;
            it = i;
            break;
        }

    }

    if(found)
        list[it] = p;
    else
        exit(EXIT_FAILURE);
}