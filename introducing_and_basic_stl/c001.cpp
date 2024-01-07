#include <iostream>
#include <string>

int main(){

    std::string name, address, phone;
    name = "Guilherme Saraiva";
    address = "rua dos amigos, 355";
    phone = "85";

    std::cout << "nome = " << name << " address = " << address << " phone = " << phone << std::endl;
    std::cout << " size occuped by string type = " << sizeof(phone) << " bytes";

    return 0;

}