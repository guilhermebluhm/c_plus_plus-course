#include <iostream>

using namespace std;

int main(){


    /*
        muito importante:
        enderecos de memoria podem 'caminhar' para frente
        e para tras, e atraves da indireção mostrar qual o valor
        para qual aquele endereço de memoria esta apontando.

        somente cuidado com os bounds
    */

    double coins[5] = {0.05, 0.5, 1.0};
    double* ptrCoin = coins;

    for(size_t i{} ; i < 3 ; i+=1){

        std::cout << "value: " << *ptrCoin << endl;
        ptrCoin++;
 
    }

    /*
        por conta da aritmetica do ponteiro, ele efetivamente esta parado
        na ultima endereco do array, caso queira imprimir em ordem reversa
        bastaria decrementar ate o endereco da posicao zero.

        cuidado com os bounds
    */

    std::cout << endl;

    for(size_t i{} ; i < 3 ; i+=1){
        
        ptrCoin--;
        std::cout << "value: " << *ptrCoin << endl;

    }

    return 0;

}