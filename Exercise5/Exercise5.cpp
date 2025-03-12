// Exercise5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int findIndex(int arr[7], int index, int number) {
    if (arr[index] == number) {
        return index;
    }
    findIndex(arr, index + 1, number);
}

int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    int number = 5;
    int index = findIndex(arr, 0, number);
    if (index > 7) {
        cout << "This number was not found in the array" << endl;
    }
    else {
        std::cout << number << " was found at index " << index << endl;
    }
}
