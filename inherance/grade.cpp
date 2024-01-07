#include <iostream>
#include "grade.h"

Grade::Grade(){
    this->score = 0;
}

void Grade::setScore(int v){
    this->score = v;
}

char Grade::getGradeScore(){

    char scoreLetter;
    
    if(this->score > 89)
        scoreLetter = 'A';
    else if (this->score > 79)
        scoreLetter = 'B';
    else
        scoreLetter = 'C';
    
    return scoreLetter;
}