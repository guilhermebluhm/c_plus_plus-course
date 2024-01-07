#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <limits>

using namespace std;

int main(){


    ofstream writeFile("sales.txt");
    double ammountValueForDay;
    string nameFileToRead;
    int daySales;
    double sumV;

    std::cout << "how many days have sales: ";
    std::cin >> daySales;

    /*
    muito importante:
    usar std::numeric_limits<streamsize>::max()
    para garantir a limpeza do buffer gerado no teclado
    ate a leitura de um '\n' a ser ignorado para que nao
    atrapalhe em outra operacao de I/O que possa ser requisitada
    */

    std::cin.ignore(std::numeric_limits<streamsize>::max(),'\n');

    for(size_t i {} ; i < daySales ; i+=1){

        std::cout << "enter sales from day: " << i+1 << " = ";
        std::cin >> ammountValueForDay;
        writeFile << ammountValueForDay << endl;

    }

    writeFile.close();
    ammountValueForDay = 0;
    ifstream sumValues;
    
/*     
    for(size_t i {} ; i < daySales ; i+=1){
        sumValues >> ammountValueForDay;
        sumV += ammountValueForDay;
    }
 */

    /*
    best tecnhnique because operator >> in addiction
    read data in file, also indicates EOF for file
    valid for use when number elements in file is not know 
    */

    /*
    muito importante:
    como cuidado adicional se pode usar std::cin >> ws
    para garantir que quaisquer espacos no buffer do teclado
    sejam descartados para leitura do getline para uma string
    */

    std::cout << "what is file open: ";
    std::getline(std::cin >> ws, nameFileToRead);
    sumValues.open(nameFileToRead);

    if(sumValues.fail()){
        
        std::cout << "file not found" << endl;
        exit(EXIT_FAILURE);
        
    }
    else{

        while(sumValues >> ammountValueForDay){

            sumV += ammountValueForDay;

        }

        sumValues.close();
        std::cout << "rounded value from all days: " << static_cast<int>(sumV) << endl;
    }

    /*
    ou simplesmente usar ATOI para qualquer input numerico
    e passar a tratar tudo como std::cin.getline
    */

    return 0;

}