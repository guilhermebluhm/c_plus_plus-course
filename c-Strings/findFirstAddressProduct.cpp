#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char *lookingFor = nullptr;
    const int NUM_PROD = 3;
    const int LENGHT_MAX = 20;

    char search[LENGHT_MAX] = {};
    char LIST_PRODUCT[NUM_PROD][LENGHT_MAX] = {
        "televisao 49 pol",
        "laptop gamer",
        "mesa kappesberg"
    };

    std::cout << "what product looking for: ";
    std::cin.getline(search, LENGHT_MAX);

    for(size_t i {} ; i < NUM_PROD ; i+=1){

        lookingFor = strstr(LIST_PRODUCT[i], search);
        if(lookingFor != nullptr)
            break;

    }

    if(lookingFor != nullptr){
        std::cout << "product localized: " << lookingFor << endl;
    }
    else{
        std::cout << "product not localized" << endl;
    }

    return 0;

}