#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream input("t1.txt");
    int value1, value2, value3;

    input >> value1;
    input >> value2;
    input >> value3;

    auto sum = value1+value2+value3;
    std::cout << "sum values read from file = " << sum << endl;
    input.close();
    
    return 0;

}