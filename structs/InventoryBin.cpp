#include <iostream>
#include <cstring>
#include <string>
#include <limits>
#include <stdlib.h>
#include <windows.h>

using namespace std;

struct inventory{

    char partDescription[30];
    int partsInInventory;

};

int main(){

    char ch;
    char findElementInInventory[15];
    char *rStr = nullptr;
    int valueToInvtry;

    inventory inv[10] 
                    { 
                        {"Valve",10}, {"Bearing",5}, {"Bushing",15},
                        {"Flange",7}, {"Gear", 5},
                        {"Cable", 18}, {"Rod",12}
                    };

    while(std::tolower((unsigned int)ch) != 113){

        for(size_t i {} ; i < 7 ; i+=1){

            std::cout << "ITEM: \t" << inv[i].partDescription << "\t\t\t" << "PART: \t" << inv[i].partsInInventory << std::endl;

        }

        std::cout << "option: ";
        ch = std::cin.get();
        std::cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
        
        int i = ch - '0';
    
        switch (i)
        {
        case 1:
            std::cout << "add parts" << std::endl;
            std::cout << "inform element do search: ";
            std::cin.getline(findElementInInventory, 15);

            for(auto &x : inv){

                rStr = std::strstr(x.partDescription,findElementInInventory);
                if(rStr != nullptr){
                    std::cout << "element find: " << x.partDescription << std::endl;
                    std::cout << "how many add in this ITEM: ";
                    std::cin >> valueToInvtry;
                    x.partsInInventory += valueToInvtry;
                    Sleep(3000);
                    std::system("CLS");
                }
                
            }
            break;

        case 2:
            std::cout << "remove parts";
            break;
        }

    }

    return 0;

}