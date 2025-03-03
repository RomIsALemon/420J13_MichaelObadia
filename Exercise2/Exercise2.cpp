// Exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student {
	string name;
	int id;
	//vector<double>* grades;
	double* grades;
};

void gradesToString(Student s, int size) {
	string grades = "";
	cout << "Student " << s.name << ", ID " << s.id << endl;
	for (int i = 0; i < size; i++) {
		cout << "Subject " << (i+1) << ": " << s.grades[i] << endl;
	}
}


int main()
{
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
	Student* students = new Student[studentNum];
	for (int i = 0; i < studentNum; i++) {
		students[i].grades = new double[subjectNum];
	}
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	for (int i = 0; i < studentNum; i++) {
		cout << "Enter data for student " << i + 1 << endl;
		cout << "Name: " << endl;
		getline(cin, students[i].name);
		cout << "ID: " << endl;
		cin >> students[i].id;
		for (int j = 0; j < subjectNum; j++) {
			double grade;
			cout << "Enter grade for subject " << j + 1 << endl;
			cin >> grade;
			students[i].grades[j] = grade;
		}
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	for (int i = 0; i < studentNum; i++) {
		gradesToString(students[i], subjectNum);
	}
}
