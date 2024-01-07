#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

using namespace std;

struct pgtoEmply{

    double grossPay;
    double payRate;
    int idEmply;
    int hours;
    std::string name;

};

int main(){

    pgtoEmply emply1;

    std::cout << "enter id employee: ";
    std::cin >> emply1.idEmply;

    std::cout << "hours: ";
    std::cin >> emply1.hours;
    std::cin.ignore(std::numeric_limits<streamsize>::max(), '\n');

    std::cout << "name: ";
    std::getline(std::cin >> ws, emply1.name);

    std::cout << "tax by hour: ";
    std::cin >> emply1.payRate;

    emply1.grossPay = emply1.hours * emply1.payRate;
    std::cout << setprecision(4) << std::fixed;
    std::cout << "gross pay: " << emply1.grossPay << std::endl;

    return 0;

}