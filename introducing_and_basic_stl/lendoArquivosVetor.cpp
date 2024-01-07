#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){

    ifstream inpFile("posicoes.txt");
    const int TAM = 5;
    int vetorPosicoes[TAM] = {};

    if(inpFile.fail()){

        std::cout << "file doesnt open - error";
        exit(EXIT_FAILURE);

    }
    else{

        int it = 0;
        std::cout << "file read with successful" << endl;
        while(it < TAM && inpFile >> vetorPosicoes[it])
            it+=1;
        
        for(size_t i {} ; i < TAM ; i+=1){

            std::cout << vetorPosicoes[i] << endl;

        }

    }

    return 0;
    
}