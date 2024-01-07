#include <iostream>

using namespace std;

int main(){

    /*
        muito importante:
        por definicao arrays sao ponteiros
        passando o primeiro elemento por espaços continguos
        indicando o primeiro endereço de memoria para a estrutura.
    */

    double coins[5] = {0.05, 0.5, 1.0, 5.0, 10.0};
    double* ptrCoinEx = coins;
    double* ptrCoin = nullptr;

    std::cout << "prove array pointer using *() notation: " << *(coins + 0);
    std::cout << "value for first element by array: " << *ptrCoinEx << endl;

    for(size_t i {} ; i < 5 ; i+=1){

        ptrCoin = &coins[i];
        std::cout << "address by each element in coin array: " << ptrCoin << endl;

    }

    return 0;

}