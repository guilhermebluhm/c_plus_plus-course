#include <iostream>
#include <iomanip>

using namespace std;

void getSales(int *, int);
double totalSales(int *, int);

int main(){

    const int TAM = 4;
    int sales[TAM] = {};

    std::cout << setprecision(4) << std::fixed;

    getSales(sales, TAM);
    std::cout << totalSales(sales, TAM);

    return 0;

}

void getSales(int *v, int sz){

    for(size_t i {} ; i < sz ; i+=1){

        std::cout << "sale ref day: " << (i+1) << " :";
        std::cin >> v[i];

    }

}

double totalSales(int *v, int sz){

    double sum = 0;
    for(size_t i {} ; i < sz ; i+=1){

        sum += *(v + i);

    }

    return sum;

}