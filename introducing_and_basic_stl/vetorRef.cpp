#include <iostream>

using namespace std;

void showArr(float [], int);
void doubleArr(float [], int);

int main(){

    const int TAM = 5;
    float arrVt[TAM] = {1.6, 3.5, 4.9, 5.9, 8.5};

    std::cout << "display original arr: " << endl;
    showArr(arrVt, TAM);
    doubleArr(arrVt, TAM);
    
    std::cout << "modified arr: " << endl;
    showArr(arrVt, TAM);
    
    return 0;

}

void showArr(float v[], int sz){

    for(size_t i{} ; i < sz ; i+=1){

        std::cout << v[i] << endl;

    }

}

void doubleArr(float v[], int sz){

    for(size_t i{} ; i < sz ; i+=1){

        v[i] *= 2;

    }

}