#include <iostream>

int main(){


    int integerValue;
    double fractionalValue;
    char letter;

    std::cout << "digit integer, fractional and letter: " << std::endl;
    std::cin >> integerValue >> fractionalValue >> letter;
    std::cout << "values: " << integerValue << " : " << fractionalValue << " letter : " << letter;
    return 0;

}