#include <iostream>
#include <string>
#include <fstream>
#include <limits>

using namespace std;

void getJudgeData(float &);
void calcScore(float, float, float, float, float, float &, float &, float &);

int main(){

    string nameFile;
    float score1, score2, score3, score4, score5;
    float minV, maxV, avgV;
    getJudgeData(score1);
    getJudgeData(score2);
    getJudgeData(score3);
    getJudgeData(score4);
    getJudgeData(score5);

    std::cout << "score recieve: " << endl << " score1 = " 
    << score1 << endl << " score2 = " 
    << score2 << endl << " score3 = " 
    << score3 << endl << " score4 = " 
    << score4 << endl << " score5 = " 
    << score5 << endl;

    calcScore(score1, score2, score3, score4, score5, minV, maxV, avgV);
    std::cout << "enter name file to persist data about player: ";
    std::getline(std::cin >> std::ws, nameFile);

    ofstream writeFile(nameFile);
    writeFile << minV << endl;
    writeFile << maxV << endl;
    writeFile << avgV << endl;

    writeFile.close();
    return 0;

}

void getJudgeData(float &v){


    std::cout << "enter score for candidate: ";
    std::cin >> v;
    while(v < 0 || v > 10){
        std::cout << "enter valid value between 0 and 10: ";
        std::cin >> v;
    }
    std::cin.ignore(std::numeric_limits<streamsize>::max(), '\n');


}

void calcScore(float v1, float v2, float v3, float v4, float v5, float &minV, float &maxV, float &avgV){

    int minValue = 99999;
    int maxValue = -99999;

    if(v1 < minValue){
        minValue = v1;
    }
    if(v2 < minValue){
        minValue = v2;
    }
    if(v3 < minValue){
        minValue = v3;
    }
    if(v4 < minValue){
        minValue = v4;
    }
    if(v5 < minValue){
        minValue = v5;
    }

    minV = minValue;
    std::cout << "min value = " << minV;

    if(v1 > maxValue){
        maxValue = v1;
    }
    if(v2 > maxValue){
        maxValue = v2;
    }
    if(v3 > maxValue){
        maxValue = v3;
    }
    if(v4 > maxValue){
        maxValue = v4;
    }
    if(v5 > maxValue){
        maxValue = v5;
    }

    maxV = maxValue;
    std::cout << "max value = " << maxV;
    
    auto sum = (v1+v2+v3+v4+v5/5) - minValue - maxValue;
    avgV = sum;
    std::cout << "average value = " << sum;
}