#include <iostream>
#include "finalScore.h"

finalScore::finalScore(){

    this->numMissing = 0;
    this->numMaxScore = 0;
    this->numQuestions = 0;

}

void finalScore::calculateMaxScore(int q, int m){

    int result = 0;
    this->numMissing = m;
    this->numQuestions = q;

    this->numMaxScore = 100.0/this->numQuestions;
    result = 100.0 - (this->numMissing * this->numMaxScore);
    this->setScore(result);

}