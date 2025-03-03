#pragma once
#include <string>
using namespace std;
class TimeTravel
{

public:
	int currentYear;
	int destinationYear;
	TimeTravel();
	void setDestinationYear(int year);
	string travel();
};

