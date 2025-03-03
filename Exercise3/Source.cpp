#include "TimeTravel.h"
#include <iostream>
using namespace std;
int main() {
	TimeTravel *t = new TimeTravel();
	int yearChoice;
	while (true) {
		cout << "Enter a year you would like to travel to: " << endl;
		cin >> yearChoice;
		if (cin.fail()) {
			cin.ignore();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Must be a number" << endl;
			continue;
		}
		else {
			t->setDestinationYear(yearChoice);
			cout << t->travel() << endl;
			break;
		}
	}
}