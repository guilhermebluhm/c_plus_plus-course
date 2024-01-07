#include <iostream>
#include <limits>

using namespace std;

struct studentInfo{

    int id;
    int creditHour;
    double GPA;
    char name[20];

};

void getStudent(studentInfo *);
void showStudent(const studentInfo *);

int main(){

    studentInfo info;
    getStudent(&info);
    showStudent(&info);
    return 0;

}

void getStudent(studentInfo* info){

    std::cout << "id student: ";
    std::cin >> (*info).id;
    std::cin.ignore(std::numeric_limits<streamsize>::max(),'\n');

    std:cout << "name student: ";
    std::cin.getline((*info).name,20);

    std::cout << "credit hour in progress: ";
    std::cin >> (*info).creditHour;

    std::cout << "GPA: ";
    std::cin >> (*info).GPA;

}

void showStudent(const studentInfo *info){

    std::cout << "NAME: \t" << info->name << std::endl;
    std::cout << "GPA: \t" << info->GPA << std::endl;
    std::cout << "CREDITS: \t" << info->creditHour << std::endl;
    std::cout << "ID: \t" << info->id << std::endl;

}