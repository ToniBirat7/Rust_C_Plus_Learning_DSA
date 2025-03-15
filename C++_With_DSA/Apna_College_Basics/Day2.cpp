#include <iostream>
using namespace std; // Bad practice for production, as it pollutes the global namespace.
// It loads everything in the global space increasing the risk of name collisions. Better use  std::cin, cout

// Conditional Statements

void conditional_satements(int age) {
    if (age >=100) {
        cout << "You are above 100" << endl;
    } else if (age >= 18) {
        cout << "You are an adult" << endl;
    } else {
        cout << "You are a kid" << endl;
    }
}

// Check Upper or Lower Case

void check_case(char ch) {

    if (ch >= 'a' && ch <= 'z'){
        cout << "The Character is Lower Case" << endl;
    }
    else {
        cout << "The Character is Upper Case" << endl;
    }
}

// Loops 

void loopings(int num) {
    int count = 1;

    cout << "While Loop Activated" << endl;

    while(count <= 5) {
        cout << "The Iterator is : " << count << endl;
        count++;
    }

    cout << "For Loop Activated" << endl;

    count = 1;

    for(count; count <= 5; count++) {
        cout << "The Iterator is : " << count << endl;
    }

}
    
int main() {
    int age;
    char ch;
    int num;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age is: " << age << endl;

    conditional_satements(age);

    cout << "Now Check Upper or Lower" << age << endl;
    cout << "Enter a Character" << endl;
    cin >> ch;

    check_case(ch);

    cout << "Now Looping" << endl;
    cout << "Enter the Range of Loop" << endl;
    cin >> num;

    loopings(num);

    return 0;
}