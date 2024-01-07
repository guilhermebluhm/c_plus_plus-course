#include <iostream>

using namespace std;

int main(){

    /*
    informacoes importantes sobre ponteiros:
    1. pointeiros sao variaveis especiais que tem o proposito
    de guardar o endereço de memoria que aponta para um determinado
    tipo de dado

    2. similar ao conceito de referencia &, entretanto,
    aplicado a casos em que e necessário lidar com alocação dinamica
    de memoria, ao lidar com arrays, strings ou tipo de dados mais custosos

    3. pointeiros devem ser inicializados a rigor a nullptr para evitar
    apontar para regiões de memoria não definidas e provocar erros de execucao

    4. por conta de ponteiros serem estruturas especializadas em armazenar
    endereços de memoria ou pelo menos o primeiro endereço de um espaço contiguo
    de elementos, existe o conceito de indireção

    5. indicação e quando se recupera o conteudo do endereço apontado pelo ponteiro
    para o tipo de dado armazenado(*ptr), assim como requer seu uso para alterar
    o conteudo de uma determinada variavel(*ptr = 250).

    6. *ptr = 250
       significa que suponho que ha um pointeiro para um inteiro que a principio
       era 10, apos a indireção seu valor passará a ser de 250
    */

    int x = 25;
    int y = 50;

    int* ptr = nullptr;
    ptr = &x;

    std::cout << x << endl;
    *ptr = 500;
    std::cout << x << endl;

    /*
        e comum um ponteiro ser reapontado para uma nova
        variavel, para tanto alterando seu endereco de memoria
        para o novo tipo que foi definido.
    */

    ptr = &y;
    std::cout << y << endl;
    *ptr += 250;
    std::cout << y << endl;

    return 0;

}