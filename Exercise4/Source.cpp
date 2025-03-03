#include <type_traits>
#include <iostream>
using namespace std;

template <typename T>
typename std::enable_if<std::is_arithmetic<T>::value, T>::type
SumArray(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}