#include <iostream>

using namespace std;

int countSentenses(char *);

int main(){

    const int MAX_TAM = 100;
    char vT1[MAX_TAM] = {};

    std::cout << "enter your sentense: ";
    std::cin.getline(vT1, MAX_TAM);
    
    int ocurr = countSentenses(vT1);

    std::cout << "ocurrences identified: " << ocurr << endl;
    return 0;

}

int countSentenses(char *v){

    int it = 0;
    int words = 0;
    int chk = 0;

    while(v[it] != '\0'){

        if(v[it] == ' '){
            
            for(chk ; chk < it ; chk+=1){

                std::cout << *(v + chk);

            }
            
            std::cout << std::endl;
            chk = it;
            words+=1;

        }

        it+=1;

    }
    
    if(words != 0 && v[0] != ' ')
        words +=1;

    return words;
}