#include <iostream>
#include <limits.h>
using namespace std;

void creatingArray() {

    int marks [5];

    marks[0] = 2;

    cout << "The value at index 0 is " << marks[0] << endl;
}

void sizeofArray() {

    int marks [5];

    cout << "The size of array with 5 elements is " << sizeof(marks) << endl;
}

void creatingArrayInitialized() {

    // Array with 5 elements
    int marks[5] = {
        10,
        20,
        30,
        40,
        50
    };

    // Array with 3 elements

    double price[] = {
        66.6,
        77.7,
        88.8
    };

    marks[0] = 2;

    cout << "Array is : " << marks[0] << endl;
}

void loopingArray() {

    long int bankId[] = {
        1234567890,
        234567890,
        34567890,
        4567890,
        567890,
        67890,
        7890,
        890,
        90,
        0
    };

    int sizeofArr = sizeof(bankId) / sizeof(long int);

    for(int i = 0; i < sizeofArr; i++) {
        
        cout << "We are printing the " << i << "th index i.e. " << bankId[i] << endl;
    };
}

void takeInputArray()  {

    int marks[5];

    // Take input
    for(int i = 0; i < 5; i++) {

        cout << "Please enter the value for " << i << "th index of array ";
        cin >> marks[i];
    }

    cout << endl;

    // Print the array

    int sizeofArr = sizeof(marks) / sizeof(int);

    for(int i = 0; i < sizeofArr; i++) {
        
        cout << "We are printing the " << i << "th index i.e. " << marks[i] << endl;
    };
}

void findMinMaxArray() {

    int small = INT_MAX;
    int big = INT_MIN; // Use __INT_MIN__ instead of __WINT_MIN__

    int nums[] = {5, 15, 22, 1, -15, 24};
    int sizeofArr = sizeof(nums) / sizeof(int);

    for (int i = 0; i < sizeofArr; i++) {
        if (nums[i] < small) {
            small = nums[i];
        }
        if (nums[i] > big) {
            big = nums[i];
        }
    }

    cout << "The smallest value is " << small << endl;
    cout << "The largest value is " << big << endl; // Fixed message
}

int main() {

    cout << "We are printing array value " << endl;
    creatingArray();
    cout << endl;

    cout << "We are printing the size of array " << endl;
    sizeofArray();
    cout << endl;

    cout << "We are printing the array with initialized value " << endl;    
    creatingArrayInitialized();
    cout << endl;

    cout << "We are printing each elements of array with loop" << endl;
    loopingArray();
    cout << endl;

    cout << "We are taking input and printing the array" << endl;
    takeInputArray();
    cout << endl;

    cout << "We are finding the smallest and the greatest number from an Array" << endl;
    findMinMaxArray();
    cout << endl;

}