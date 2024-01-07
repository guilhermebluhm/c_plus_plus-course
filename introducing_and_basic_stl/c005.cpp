#include <iostream>
#include <string>

int main(){

    std::string name;
    std::string city;

    std::cout << "your name: " << name << std::endl;
    std::cin >> name;

    std::cout << "your city: " << city << std::endl;
    std::cin >> city;

    std::cout << "your name is: " << name << " city = " << city;
}   