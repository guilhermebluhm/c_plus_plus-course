#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char vT1[20] = {"hello"};
    char vt2[] = {"same"};

    /*
    using strcat(unsafe) and strlen
    */

   /*
    vT1 tem que ser suficientemente grande no espaço alocado
    na memoria em bytes para caber a junção de vT1+vT2 + '\n'

    então espaço em bytes alocado sizeof() a junção strlen()
   */

    if(sizeof(vT1) >= (strlen(vT1) + strlen(vt2) + 1)){

        std::cout << "yes, have space to concatanete operation" << endl;
        char *buffer = nullptr;
        buffer = strcat(vT1, vt2);
        int it = 0;
        while (buffer[it] != '\0')
        {
            std::cout << buffer[it];
            it+=1;
        }
        std::cout << std::endl;
        buffer = nullptr;
    }
    else{
        std::cout << "space enought" << std::endl;
    }

    /*
        versao safe do strcat
    */

    /*
        pre-requisito: checar o que sobra em um dos arr
        para concatenar o outro
    */

    const int TAM_1 = 17;
    const int TAM_2 = 20;

    char arr1[TAM_1] = {"welcome"};
    char arr2[TAM_2] = {" to merry"};

    //verificando o que sobra no arr1
    int maxSecureSpace = sizeof(arr1) - strlen(arr2) + 1;
    std::cout << maxSecureSpace << endl;
    std::cout << strncat(arr1, arr2, maxSecureSpace) << std::endl;

    return 0;
    
}