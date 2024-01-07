#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int numDays;
    double total = 0;
    double* sales = nullptr;

    std::cout << "number days of sales in this month: ";
    std::cin >> numDays;

    /*
        ao criar a alocacao dinamica com new
        e realizada a mesma logica da alocacao de endereco
        para referencia de arrays, e alocado inicialmente um pedaco
        de memoria para o espaco contiguo a ser reservado

        caso nao haja espaco de memoria disponivel, e gerado um throw
        pela aplicacao.

        para evitar memory leak sempre apos o uso do new, requer
        definir delete [] ptr_definido para arrays criados, seguido
        de um apontamento nullptr do ponteiro a pouco deletado para
        reforcar que nao deve ser usada novamente aquela regiao de memoria
    */
    sales = new double[numDays];

    for(size_t i {} ; i < numDays ; i+=1){

        std::cout << "day: " << (i+1) << " : ";
        std::cin >> *(sales + i);

    }

    for(size_t i{} ; i < numDays ; i+=1){

        total += *(sales + i);

    }

    delete [] sales;
    sales = nullptr;

    std::cout << setprecision(4) << std::fixed;
    std::cout << "total sales: " << total << endl;
    std::cout << "averege: " << total/numDays << endl;

    return 0;

}