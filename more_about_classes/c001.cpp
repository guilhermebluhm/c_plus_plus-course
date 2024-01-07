#include <iostream>
#include "budget.h"

using namespace std;

int main(){

    int cost = 0;
    const int NUM_DIV = 4;
    budgetCorp bud[NUM_DIV];

    std::cout << "what cost operation to office: ";
    std::cin >> cost;
    budgetCorp::setOfficeBudget(cost);

    std::cout << "value in static variable before initialized instance attributes: " << bud->getCostBudget() << std::endl;

    for(size_t i {} ; i < NUM_DIV ; i+=1){

        std::cout << "inform budget for division #" << (i+1) << " : ";
        std::cin >> cost;
        bud[i].setDivisionCost(cost);
        
    }

    std::cout << "total budget corporation = " << bud->getCostBudget();

    return 0;

}