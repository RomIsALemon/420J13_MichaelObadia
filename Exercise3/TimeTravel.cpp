#include "TimeTravel.h"
#include <iostream>
using namespace std;

TimeTravel::TimeTravel() {
	currentYear = 2025;
	destinationYear = currentYear;
}

void TimeTravel::setDestinationYear(int year) {
	if (year >= 1900 && year <= 2100) {
		destinationYear = year;
	}
}

string TimeTravel::travel() {
	currentYear = destinationYear;
	return "You travelled to " + to_string(currentYear);
}
