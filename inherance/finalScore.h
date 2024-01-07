#include "grade.h"
#ifndef FINAL_SCORE_H
#define FINAL_SCORE_H

class finalScore : public Grade {

    private:
        int numMaxScore;
        int numQuestions;
        int numMissing;
    public:
        finalScore();
        void calculateMaxScore(int, int);


};

#endif