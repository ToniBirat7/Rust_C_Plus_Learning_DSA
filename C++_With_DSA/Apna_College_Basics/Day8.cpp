#include <iostream>
#include <vector>
using namespace std;

void passByRef(int arr[], int size) {

    for(int i = 0; i<size; i++) {
        arr[i] = arr[i] * 2;
    }

    cout << "We modified the passed array by multiplying each element by 2" << endl;
}

void reverseArrayWithForLoopV1(int arr[], int size) {
    int start = 0;
    int end = size - 1; 

    for(int i = 0; start<end; i++) {
      int swappingValue = arr[start];
      arr[start] = arr[end];
      arr[end] = swappingValue;

      start++;
      end--;
    } 
}

void reverseArrayWithForLoopV2(int arr[], int size) {
    int start = 0;
    int end = size - 1; 

    for(; start<end; start++, end--) {
      int swappingValue = arr[start];
      arr[start] = arr[end];
      arr[end] = swappingValue;
    } 
}

void reverseArrayWithWhileLoop(int arr[], int size) {

    int start = 0;
    int end = size - 1;

    while(start<end) {
      swap(arr[start], arr[end]);

      start++;
      end--;
    }
}

void vectorImplementation() {
  vector<int> vec = {1,2,3}; // 1st Appproach

  vector<char> vec2 = {'a', 'b', 'c'}; // 2nd Approach

  vector<int> vec3 (3,0); // 3 elements with value of 0
  
  vec.push_back(4);

  vec.pop_back();

  for(int i : vec) {
      cout << i << endl;
  }

  cout << endl;

  cout << "Size of Vec : " << vec.size() << endl;

  cout << endl;

  cout << "Front : " << vec.front() << endl;

  cout << endl;

  cout << "Back : " << vec.back() << endl;

  cout << endl;

  cout << "At : " << vec.at(2) << endl;

  cout << endl;

  cout << "Capacity : " << vec.capacity() << endl;
}

void reverseVectorValue(vector<int> vec) {

  int start = 0;
  int end = vec.size() - 1;

  while(start<end) {
    swap(vec[start], vec[end]);

    start++;
    end--;
  }

  for(int i : vec) {
    cout << "Item " << i << endl;
  }
}

void reverseVectorReference(vector<int>& vec) {

  int start = 0;
  int end = vec.size() - 1;

  while(start<end) {
    swap(vec[start], vec[end]);

    start++;
    end--;
  }

  for(int i : vec) {
    cout << "Item " << i << endl;
  }
}

int main() {
  int arr[] = {1,2,3};
  int size = sizeof(arr) / sizeof(int);
  vector<int> revVec = {1,2,3};

  passByRef(arr, size);
  cout << "We are now printing the modified array" << endl;

  for(int i = 0; i<size; i++) {
    cout << arr[i] << endl;
  }

  cout << endl;

  reverseArrayWithForLoopV1(arr, size);
  cout << "We are now printing the modified reversed array For Loop V1" << endl;

  for(int i = 0; i<size; i++) {
    cout << arr[i] << endl;
  }

  cout << endl;

  reverseArrayWithForLoopV2(arr, size);
  cout << "We are now printing the modified reversed array For Loop V2" << endl;

  for(int i = 0; i<size; i++) {
    cout << arr[i] << endl;
  }

  cout << endl;

  reverseArrayWithWhileLoop(arr, size);
  cout << "We are now printing the modified reversed array While Loop" << endl;

  for(int i = 0; i<size; i++) {
    cout << arr[i] << endl;
  }

  cout << endl;

  cout << "We are now printing the values from the vector" << endl;
  vectorImplementation();

  cout << endl;

  cout << "Reversing in Vector by Value" << endl;
  reverseVectorValue(revVec);

  cout << endl; 

  cout << "Is the original vector reversed?? i.e. {3,2,1}" << endl;

  for(int i : revVec) {
      cout << i << endl;
  }

  cout << endl; 

  cout << "Reversing in Vector Reference" << endl;
  reverseVectorReference(revVec);

  cout << endl; 

  cout << "Is the original vector reversed?? i.e. {3,2,1}" << endl;

  for(int i : revVec) {
      cout << i << endl;
  }

  cout << endl; 
}