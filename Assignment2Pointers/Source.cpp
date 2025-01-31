//This file is being used to check my answers on the txt file
#include <iostream>

int main() {
	int a = 10;
	float* p = (float*)&a;
	std::cout << *p;
}