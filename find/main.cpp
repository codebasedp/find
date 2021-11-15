// DzMap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>

struct StudentInfo {
    std::string firstName;
    std::string secondName;
    int avarageScore;
};

bool MaxAvarageScore(const std::pair<int, StudentInfo>& n) {
    return n.second.avarageScore % 100 == 0;
};

int main()
{
    StudentInfo anton;
    anton.firstName = "Anton";
    anton.secondName = "Antonov";
    anton.avarageScore = 57;
    StudentInfo valero;
    valero.firstName = "Valero";
    valero.secondName = "Valerov";
    valero.avarageScore = 78;
    StudentInfo petro;
    petro.firstName = "Petro";
    petro.secondName = "Petrov";
    petro.avarageScore = 8;
    StudentInfo setro;
    setro.firstName = "Setro";
    setro.secondName = "Setrov";
    setro.avarageScore = 100;

    std::map<int, StudentInfo> students;
    students.insert(std::make_pair(11, anton));
    students.insert(std::make_pair(2, valero));
    students.insert(std::make_pair(32, petro));
    students.insert(std::make_pair(24, setro));
    auto first = students.begin();
    auto last = students.end();


    std::map<int, StudentInfo>::iterator it = 
        std::find_if(first, last, MaxAvarageScore);

    std::cout << "first name is: " << it->second.firstName;
}
