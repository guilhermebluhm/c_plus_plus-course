#include <iostream>
#include <limits>
#include <iomanip>
#include <string>

using namespace std;

struct aquisicaoAnimal{

    int id;
    double value;

};

struct animal{

    std::string raca;
    std::string nome;
    double peso;
    aquisicaoAnimal aquisicao;

};

int main(){

    animal an;
    std::cout << "inform id for the animal: ";
    std::cin >> an.aquisicao.id;

    std::cout << "inform value aquisition animal: ";
    std::cin >> an.aquisicao.value;
    std::cin.ignore(std::numeric_limits<streamsize>::max(),'\n');

    std::cout << "inform name to animal: ";
    std::getline(std::cin >> std::ws, an.nome);

    std::cout << "inform race to animal: ";
    std::getline(std::cin >> std::ws, an.raca);

    std::cout << "weight to animal: ";
    std::cin >> an.peso;

    std::cout << setprecision(4) << std::fixed;
    std::cout << an.aquisicao.id << endl << " : " << an.aquisicao.value << endl << " : " << an.nome << endl;

    return 0;

}