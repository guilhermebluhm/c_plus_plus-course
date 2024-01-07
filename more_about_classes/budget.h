#ifndef BUDGET_H
#define BUDGET_H

class budgetCorp{

    private:
        int divisionCorp;
        static int costBudget;
    public:
        budgetCorp(){};
        void         setDivisionCost(int);
        int          getCostBudget();
        static void  setOfficeBudget(int);

};

#endif