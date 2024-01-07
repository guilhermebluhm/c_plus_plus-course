#include <iostream>

using namespace std;

void getValue(double *);
void doubleValue(double *);

int main(){

    double vL = 0;
    getValue(&vL);
    doubleValue(&vL);
    std::cout << vL << endl;
    return 0;

}

void getValue(double *v){

    std::cout << "enter value: ";
    std::cin >> *v;

}

void doubleValue(double *v){

    *v *= 2;

}