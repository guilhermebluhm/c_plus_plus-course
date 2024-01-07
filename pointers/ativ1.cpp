#include <iostream>
#include <string>
#include <limits>
#include <fstream>
#include <iomanip>

using namespace std;

double sortingElements(int *, int);

int main(){

    int score;
    int numTestScore;
    std::string nameFile;
    int* numStudentScore = nullptr;

    std::cout << "how many tests: ";
    std::cin >> numTestScore;
    std::cin.ignore(std::numeric_limits<streamsize>::max(), '\n');

    std::cout << "name file to persist data: ";
    std::getline(std::cin >> std::ws, nameFile);

    ofstream wrFile(nameFile);
    numStudentScore = new int[numTestScore];

    for(size_t i {} ; i < numTestScore ; i+=1){

        std::cout << "test: " << (i+1) << " - score: ";
        std::cin >> score;
        *(numStudentScore + i) = score;
        wrFile << score << endl;

    }

    double avg = sortingElements(numStudentScore, numTestScore);

    for(size_t i {} ; i < numTestScore ; i+=1){

        std::cout << *(numStudentScore+i) << endl;

    }

    delete [] numStudentScore;
    numStudentScore = nullptr;

    std::cout << setprecision(4) << std::fixed;
    std::cout << "average value: " << avg << endl;
    wrFile << avg << endl;
    wrFile.close();

    return 0;

}

double sortingElements(int *v, int sz){

    double average = 0;

    for(size_t i {0} ; i < sz ; i+=1){

        for(size_t j {i+1} ; j < sz ; j+=1){
            
            if(v[i] < v[j]){

                int tmp = *(v + i);
                *(v+i) = *(v+j);
                *(v+j) = tmp;

            }

        }

    }

    for(size_t i {} ; i < sz ; i+=1){

        average += *(v+i);

    }

    return average/sz;

}