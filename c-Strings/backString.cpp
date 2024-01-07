#include <iostream>
#include <cstring>

using namespace std;

int main(){

    const int MAX_TAM = 20;
    char vT1[MAX_TAM] = {};

    std::cout << "enter your sentense: ";
    std::cin.getline(vT1, MAX_TAM);

    int lastestElem = strlen(vT1) + 1;

    std::cout << std::endl;
    std::cout << "sentense in reverse order" << endl;
    
    for(size_t i = lastestElem ; i > 0 ; i-=1){
        std::cout << vT1[i];
    }

    return 0;
}