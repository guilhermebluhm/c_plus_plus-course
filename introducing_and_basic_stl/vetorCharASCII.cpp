#include <iostream>

using namespace std;

int main(){

    const int TAM = 5;
    char posASCII[TAM] = {'A', 'B', 'C', 'D', 'E'};
    for(size_t i {} ; i < TAM ; i+=1){

        std::cout << static_cast<int>(posASCII[i]) << endl; 

    }
    return 0;

}