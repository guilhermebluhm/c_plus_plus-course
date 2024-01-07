#include <iostream>
#include <limits>

using namespace std;

struct itemInfo{

    int id;
    double value;
    char description[20];

};

/*
    important:
    when pass structure thinking performance
    it´s necessary pass reference to function,
    but sending value copy is spending memory unnecessary
    and to prevent unexpected modify required inform const
    because in this form pass address to strutured avoid
    speding memory
*/

void getItem(itemInfo&);
void showItem(const itemInfo&);

int main(){

    itemInfo inf;
    getItem(inf);
    showItem(inf);
    return 0;

}

void getItem(itemInfo &item){

    
    std::cout << "enter id for item: ";
    std::cin >> item.id;

    std::cout << "enter value for item: ";
    std::cin >> item.value;
    std::cin.ignore(std::numeric_limits<streamsize>::max(),'\n');

    std::cout << "enter name for product: ";
    std::cin.getline(item.description,20);

}

void showItem(const itemInfo &item){

    std::cout << "ITEM ID: \t" << item.id << std::endl;
    std::cout << "ITEM VALUE: \t" << item.value << std::endl;
    std::cout << "ITEM NAME: \t" << item.description << std::endl; 

}