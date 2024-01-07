#include <iostream>
#include <cstring>

using namespace std;

int main(){

    //para todos os possiveis 255 posicoes de ASCII
    //descartando os estendidos

    int countFrq[255] = {0};
    const int MAX_TAM = 100;
    char vT1[MAX_TAM] = {};

    std::cout << "enter your sentense: ";
    std::cin.getline(vT1, MAX_TAM);
    int len = strlen(vT1);

    for(size_t i{} ; i < len ; i+=1){

        if(std::isalpha((unsigned int) vT1[i])){

            //std::cout << (char) vT1[i] << std::endl;
            countFrq[(unsigned int) vT1[i]]++;

        }

    }

    int maxFrequency = -1;
    char mostFrequencyCaracter;

    for(size_t i {} ; i < 255 ; i+=1){

        if(countFrq[i] != 0 && countFrq[i] > maxFrequency){
            maxFrequency = countFrq[i];
            mostFrequencyCaracter = (char) i;            
        }

    }

    std::cout << "most character: " << mostFrequencyCaracter << " frequency = " << maxFrequency << endl;
    return 0;

}