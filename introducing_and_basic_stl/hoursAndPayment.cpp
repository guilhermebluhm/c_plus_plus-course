#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){

    const int TAM = 2;
    std::vector<int> hoursInWorking;
    std::vector<int> taxByHour;
    int ind;

    for(size_t i{} ; i < TAM ; i+=1){

        int hour, tax;

        std::cout << "for " << (i+1) << " worker hour working: ";
        std::cin >> hour;
        hoursInWorking.push_back(hour);

        std::cout << "for " << (i+1) << " hour rate: ";
        std::cin >> tax;
        taxByHour.push_back(tax);

    }

    std::cout << setprecision(4) << std::fixed;

    for(size_t i{} ; i < TAM ; i+=1){

        int v = hoursInWorking.at(i) * taxByHour.at(i);
        std::cout << v << endl;

    }

    return 0;

}
