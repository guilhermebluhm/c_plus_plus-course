#include <iostream>
#include <limits>
#include <vector>

using namespace std;

const int TAM_LETTER_GRADE = 5;

int main(){

    double score;
    std::string name;
    char letterGrade[TAM_LETTER_GRADE] = {'A','B','C','D','F'};
    std::vector<std::string> studentsName;
    std::vector<std::vector<double>> studentTestScore(3);

    for(size_t i {} ; i < 2 ; i+=1){

        std::cout << "enter your name: ";
        std::getline(std::cin >> std::ws, name);
        studentsName.push_back(name);
        //std::cin.ignore(std::numeric_limits<streamsize>::max(),'\n');

        for(size_t j {} ; j < 4 ; j+=1){

            std::cout << "score for test #" << (j+1) << " :";
            std::cin >> score;
            studentTestScore[i].push_back(score);

        }

    }

    for(size_t i {} ; i < 2 ; i+=1){

        double avgStudent = 0;

        std::cout << "student: " << studentsName[i] << endl;
        for(size_t j {} ; j < 4 ; j+=1){
            avgStudent += studentTestScore.at(i)[j];
        }

        std::cout << "avegere test score: " << avgStudent/4 << endl;
        
        if((avgStudent/4) < 2.0){
            std::cout << "grade F" << endl;
            continue;
        }

        if((avgStudent/4) < 4.0){
            std::cout << "grade D" << endl;
            continue;
        }

        if((avgStudent/4) < 6.0){
            std::cout << "grade C" << endl;
            continue;
        }

        if((avgStudent/4) < 8.0){
            std::cout << "grade B" << endl;
            continue;
        }

        if((avgStudent/4) <= 10.0){
            std::cout << "grade A" << endl;
            continue;
        }

    }

    return 0;

}