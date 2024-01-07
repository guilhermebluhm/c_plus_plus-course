#include <iostream>

const float percentTotalSales = 0.58;

int main(){

    /*questao 1*/
    float salesThisYear = 8.6E6f;
    auto r1 = salesThisYear - (salesThisYear * percentTotalSales);
    std::cout << "fees = " << r1 << std::endl;

    /*questao 12*/
    float totalLand = 391.876;
    float oneAcre = 43.560;
    auto r2 = (totalLand/oneAcre);
    std::cout << "proportional acre for this land = " << r2 << std::endl;
    
    return 0;

}