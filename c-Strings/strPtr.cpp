#include <iostream>

using namespace std;

int findPtrStr(char *, char);

int main(){

    const int TAM_MAX = 20;
    int ocurrence = 0;
    char vT1[TAM_MAX] = {};
    char chr;

    std::cout << "enter str: ";
    std::cin.getline(vT1, TAM_MAX);

    std::cout << "enter charactere to seach: ";
    chr = std::cin.get();

    std::cout << "number ocurrences to " << findPtrStr(vT1,chr) << endl;

    return 0;

}

int findPtrStr(char* ch, char fnd){

    int it = 0;

    while(*ch != '\0'){

        if(*ch == fnd)
            it++;

        ch++;
    }

    return it;

}