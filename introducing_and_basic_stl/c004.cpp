#include <iostream>
#include <iomanip>

int main(){

    /*write a simple algorithm to determine months necessary to read books*/

    int numBooks;
    int months;
    double monthsNecessary;

    std::cout << "how many books do expected read: " << std::endl;
    std::cin >> numBooks;
    std::cout << "months available for this: " << std::endl;
    std::cin >> months;

    //static cast recieve one parameter
    std::cout << std::setprecision(3) << std::fixed;
    monthsNecessary = static_cast<double>(numBooks)/months;
    std::cout << "estimative for this: " << monthsNecessary << std::endl;

    //demonstrating example static cast integer -> char equivalent for ASCII table
    int valueForASCII = 72;
    std::cout << "72 in ASCII table is = " << static_cast<char>(valueForASCII) << std::endl;

    return 0;

}