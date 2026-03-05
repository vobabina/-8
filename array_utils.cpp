#include <iostream>
#include "array_utils.h"

using namespace std;

void inputArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int sumArray(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}