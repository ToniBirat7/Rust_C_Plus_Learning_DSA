#include <iostream>
using namespace std;

int variable_assignment() {

    int first_number = 10;
    int second_number = 20;
    int sum = first_number + second_number;

    cout << "The sume of " << first_number << " and " << second_number << " is " << sum << endl;
    cout << sizeof(sum) << endl;
    cout << sizeof(first_number) << endl;
    cout << sizeof(second_number) << endl;

    return 0;
}

int type_casting() {

    char ch = 'A'; // ASCII value of A is 65

    int value = ch;
    cout << "The ASCII value of " << ch << " is " << value << endl; // 65 is printed

    return 0;

}

int explicit_type_casting() {

    double a = 65.5;
    int b = (int)a;

    cout << "The value of " << a << " is " << b << endl;

    return 0;
}

int main() {

    cout << "Hello World! Birat Here" << endl;
    cout << "This is my first program in C++" << endl;
    cout << "I am calling a function from main" << " and the function is variable_assignment()" << endl;

    variable_assignment();

    cout << "I am calling a function from main" << " and the function is type_casting()" << endl;

    type_casting();

    cout << "I am calling a function from main" << " and the function is explicit_type_casting()" << endl;

    explicit_type_casting();

    return 0;
}