#include <iostream>
#include <limits>

using namespace std;

struct studentInfoScore{

    char name[20];
    float average;
    int *testScore;

};

void getStudentScoreInfo(studentInfoScore*);
void showStudentData(const studentInfoScore*);

int main(){


    studentInfoScore *info;
    info = new studentInfoScore; 
    
    getStudentScoreInfo(info);
    showStudentData(info);
    
    delete [] info->testScore;
    delete info;

    return 0;

}

void getStudentScoreInfo(studentInfoScore* info){

    int sum = 0;
    info->testScore = new int[4];
    for(size_t i {} ; i < 4 ; i+=1){

        std::cout << "informe score #" << (i+1) << ":";
        std::cin >> info->testScore[i];
        sum += info->testScore[i];
    }

    std::cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
    info->average = (sum/4);
    std::cout << "enter name: ";
    std::cin.getline(info->name,20);

}

void showStudentData(const studentInfoScore* info){

    std::cout << "AVERAGE SCORE: \t" << info->average << std::endl;
    std::cout << "NAME: \t" << info->name << std::endl;
    for(size_t i {} ; i < 4 ; i+=1){
        std::cout << "# " << (i+1) << " : " << info->testScore[i] << std::endl;
    }

}