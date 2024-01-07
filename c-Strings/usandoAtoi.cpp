#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cctype>

using namespace std;

int main(){

    int it = 0;
    double sum = 0;
    const int TAM = 5;
    char vT[TAM] = {};

    std::cout << "enter value to sum series or q to exit: ";
    std::cin.getline(vT, TAM);

    while(std::tolower(vT[0]) != 'q'){

        sum += atof(vT);
        it+=1;

        std::cout << "enter value to sum series or q to exit: ";
        std::cin.getline(vT, TAM);

    }

    std::cout << "sum series: " << static_cast<double>(sum)/it;

    return 0;

}