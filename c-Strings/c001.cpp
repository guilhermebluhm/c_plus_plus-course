#include <iostream>

using namespace std;

int main(){

    const int TAM = 30;
    char vT[TAM] = {};

    std::cout << "enter name, remember in c-string required size - 1: ";
    std::cin.getline(vT, TAM);

    int it = 0;
    while(vT[it] != '\0'){

        std::cout << vT[it] << endl;
        it+=1;

    }

    return 0;

}