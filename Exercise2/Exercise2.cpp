// Exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student {
	string name;
	int id;
	vector<double>* grades;
};

vector<Student> makeStudentList() {
	int studentNum;
	int subjectNum;
	while (true) {
		cout << "Enter the number of students : " << endl;
		cin >> studentNum;
		if (cin.fail() || studentNum < 0) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Must be a valid number. Try again." << endl;
			continue;
		}
		else {
			break;
		}
	}
	while (true) {
		cout << "Enter the number of subjects : " << endl;
		cin >> subjectNum;
		if (cin.fail() || subjectNum < 0) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Must be a valid number. Try again." << endl;
			continue;
		}
		else {
			break;
		}
	}
	vector<Student> studentList;
	studentList.resize(studentNum);
	for (int i = 0; i < studentList.size(); i++) {
		studentList[i].grades = new vector<double>;
		studentList[i].grades->resize(subjectNum);
		studentList[i].grades->reserve(subjectNum);
	}
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return studentList;
}

string gradesToString(Student s) {
	string grades = "";
	for (int i = 0; i < s.grades->size(); i++) {
		grades = grades + to_string((*s.grades)[i]) + " ";
	}
	return grades;
}

string toString(Student s) {

	return "Name: " + s.name + ", ID: " + to_string(s.id) + ", Grades: " + gradesToString(s) + "\n";
}

int main()
{
	vector<Student> students = makeStudentList();
	cout << "Array size " << students.size() << endl;
	for (int i = 0; i < students.size(); i++) {
		cout << "Enter data for student " << i + 1 << endl;
		cout << "Name: " << endl;
		getline(cin, students[i].name);
		cout << "ID: " << endl;
		cin >> students[i].id;
		int subjects = students[i].grades->size();
		for (int j = 0; j < subjects; j++) {
			double grade;
			cout << "Enter grade for subject " << j + 1 << endl;
			cin >> grade;
			students[i].grades->insert(students[i].grades->begin(),grade);
		}
		students[i].grades->resize(subjects);
	}
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	for (int i = 0; i < students.size(); i++) {
		cout << toString(students[i]);
	}
}
