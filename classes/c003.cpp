#include <iostream>
#include "contactInfo.h"

int main(){

    contactInfo *info = nullptr;
    info = new contactInfo("katy","555-222");
    
    std::cout << info->getName();
    delete info;
    
    return 0;

}