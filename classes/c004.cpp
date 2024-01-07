#include <iostream>
#include "integerList.h"

using namespace std;

int main(){

    integerList lst(5);
    std::cout << lst.getElement(2) << std::endl;
    lst.setElement(25);
    std::cout << lst.getElement(0) << std::endl;
    return 0;
    
}