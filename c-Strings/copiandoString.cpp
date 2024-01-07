#include <iostream>
#include <cstring>

using namespace std;

void copyCharVt(char [], char []);

int main(){

    const int vT1_TAM_MAX = 20;
    const int vT2_TAM_MAX = 8;

    char vT1[vT1_TAM_MAX] = {};
    char vT2[vT2_TAM_MAX] = {};

    std::cout << "enter your message: ";
    std::cin.getline(vT1, vT1_TAM_MAX);

    copyCharVt(vT1, vT2);
    std::cout << vT2;

    return 0;

}

void copyCharVt(char v1[], char v2[]){

    //desconsiderando a inclusao do '\0'
    int maxBytes = sizeof(v2) - 1;
    std::strncpy(v2,v1,maxBytes);
    v2[maxBytes] = '\0';

}