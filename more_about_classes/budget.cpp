#include <iostream>
#include "budget.h"

//region to declare static variables
int budgetCorp::costBudget = 0;

//region to static functions
void budgetCorp::setOfficeBudget(int v){
    costBudget += v;
}

void budgetCorp::setDivisionCost(int v){

    divisionCorp += v;
    costBudget += v;

}

int budgetCorp::getCostBudget() {
    return costBudget;
}
