#include <iostream>
#include "finalScore.h"

using namespace std;

int main(){

    finalScore scoreStd;
    scoreStd.calculateMaxScore(10,2);
    std::cout << scoreStd.getGradeScore() << std::endl;
    return 0;

}