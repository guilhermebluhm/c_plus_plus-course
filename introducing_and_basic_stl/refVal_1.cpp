#include <iostream>

using namespace std;

void simpleExampleForRefVar(int &v);

int main(){


    int v = 10;
    std::cout << "value for this variable = " << v << endl;
    std::cout << "pass for reference" << endl;
    simpleExampleForRefVar(v);
    std::cout << "new value for same variable = " << v << endl;
    return 0;

}

void simpleExampleForRefVar(int &v){

    v *= 10;

}