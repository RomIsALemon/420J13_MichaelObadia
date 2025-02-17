// Exercise1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;
struct Course {
    std::string name;
    float midterm;
    float exam;
    float project;
};

int validateNumber(string gradeName) {
    int n;
    while (true) {
        cout << "Enter " << gradeName << " grade: " << endl;
        cin >> n;
        if (cin.fail() || n < 0 || n > 100) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Must be a valid number. Try again." << endl;
            continue;
        }
        else {
            break;
        }
    }
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return n;
}

Course createCourse(string name, float grade1, float grade2, float grade3) {
    Course course;
    course.name = name;
    course.midterm = grade1;
    course.exam = grade2;
    course.project = grade3;
    return course;
}

string toString(Course course) {
    return course.name + ": Midterm Grade : " + std::to_string(course.midterm) + "%, Exam Grade: " + std::to_string(course.exam) + "%, Project Grade: " + std::to_string(course.project) + "%";
}

int readArraySize() {
    int size;
    while (true) {
        cout << "Enter array size" << endl;
        cin >> size;
        if (cin.fail() || size < 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Must be a valid number. Try again." << endl;
            continue;
        }
        else {
            break;
        }
    }
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return size;
}

int main()
{
    int courseNum = readArraySize();
    //const int courseAmount = courseNum;
    std::vector<Course> courseList;
    courseList.resize(courseNum);
    //Course courseArr[courseAmount];
    /*courseArr[0].name = "English";
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
    courseArr[2].project = 20;*/

    for (int i = 0; i < courseList.size(); i++) {
        string name;
        float grade1;
        float grade2;
        float grade3;
        cout << "Enter course name: " << endl;
        getline(cin, name);
        while (true) {
            grade1 = validateNumber("Midterm");
            grade2 = validateNumber("Exam");
            grade3 = validateNumber("Project");
            courseList[i] = createCourse(name, grade1, grade2, grade3);
            break;
        }
    }

    for (int i = 0; i < courseList.size(); i++) {
        cout << toString(courseList[i]) << endl;
    }
}

