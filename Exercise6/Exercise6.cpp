// Exercise6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int power(int x, int y) {
    if (y != 0) {
        return x * power(x, y - 1);
    }
    else {
        return 1;
    }
}

int main()
{
    std::cout << power(3,3);
}
