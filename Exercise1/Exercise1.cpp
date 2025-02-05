// Exercise1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    struct Course {
        std::string name;
        float midterm;
        float exam;
        float project;
    };

    const int courseAmount = 3;
    Course courseArr[courseAmount];
    courseArr[0].name = "English";
    courseArr[0].midterm = 40;
    courseArr[0].exam = 50;
    courseArr[0].project = 10;
    courseArr[1].name = "Math";
    courseArr[1].midterm = 30;
    courseArr[1].exam = 70;
    courseArr[1].project = 0;
    courseArr[2].name = "History";
    courseArr[2].midterm = 50;
    courseArr[2].exam = 30;
    courseArr[2].project = 20;

    for (int i = 0; i < courseAmount; i++) {
        cout << courseArr[i].name << ": Midterm weight : " << courseArr[i].midterm << "%, Exam weight: " << courseArr[i].exam << "%, Project weight: " << courseArr[i].project << "% \n" << endl;
    }
}

