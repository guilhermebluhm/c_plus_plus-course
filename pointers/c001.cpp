#include <iostream>

using namespace std;

int main(){

    unsigned short int x = 25;
    std::cout << "address variable = " << &x << endl;
    std::cout << "bytes = " << sizeof(x) << endl;
    std::cout << "value = " << x << endl;
    return 0;

}