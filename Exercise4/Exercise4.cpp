#include <iostream>
using namespace std;

//class Array {
//private: 
//    int* data;
//    size_t size;
//
//public:
//    Array(size_t size) : size(size), data(new int[size]) {}
//
//
//};


//Part 1
template <typename T>
typename std::enable_if<std::is_arithmetic<T>::value, T>::type
SumArray(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}


//Part 2
class Vehicle {
protected:
    string vehicleName;
public:
    Vehicle(string name) {
        vehicleName = name;
    }
    virtual void displayVehicleInfo() = 0;
};

class Car : Vehicle {
private:
    int numDoors;
public:
    void displayVehicleInfo() {
        cout << "Name: " << vehicleName << ", Number of Doors: " << numDoors << endl;
    }
    Car(string name, int doors) : Vehicle(name) {
        numDoors = doors;
    }
};

class Motorcycle : Vehicle {
private:
    bool hasSideCar;
public:
    void displayVehicleInfo() {
        cout << "Name: " << vehicleName << ", Has Side Car: " << hasSideCar << endl;
    }
    Motorcycle(string name, bool sideCar) : Vehicle(name){
        hasSideCar = sideCar;
    }
};


template <typename T> class Garage {
private:
    Vehicle<T>* storedV;
public:
    void storeVehicle(T v) {
        storedV = v;
    }
    void showVehicle() {
        if (storedV == nullptr) {
            cout << "No vehicles in the garage." << endl;
        }
        else {
            storedV.displayVehicleInfo();
        }
    }
};

int main()
{
    /*int arr1[] = {1, 2, 3, 4};
    float arr2[] = { 3.0, 2.5, 10.7 };
    double arr3[] = { 2.32, 12.123, 3.21, 4.222, 9.15 };
    cout << SumArray(arr1, 4) << endl;
    cout << SumArray(arr2, 3) << endl;
    cout << SumArray(arr3, 5) << endl;*/

    Car c("Toyota", 4);
}

