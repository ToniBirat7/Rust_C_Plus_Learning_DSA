#include <iostream>
using namespace std;

// Revise Floyds Triangle
void flyods_triangle() {

    int row = 4;
    int num = 1;

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= i; j++) {
            cout << num << " ";
            num++; 
        }
        cout << endl;
    }
}

void inverted_triangle_pattern() {

    int row = 4;
    int count = 4;
    
    string space = " ";

    for(int i = 1; i <= row; i++) {

        // Space
        cout << space;

        // Num
        for(int j = 1; count - j >= 0; j++) {
            cout << i;
        }
        space = space + ' ';
        count--;
        cout << endl;
    }
}

void inverted_triangle_pattern_char() {

    int row = 4;
    int count = 4;
    char ch = 'A';
    
    string space = " ";

    for(int i = 1; i <= row; i++) {
        
        // Space
        cout << space;

        // Num
        for(int j = 1; count - j >= 0; j++) {
            cout << ch;
        }
        space = space + ' ';
        count--;
        ch++;
        cout << endl;
    }

    cout << ch;
}

void pyramid_pat() {

    int row = 8;

    for(int i = 1; i <= row; i++) {

        // Spaces
        for(int j = row; j - i > 0; j--) {
            cout << " ";
        }

        // First Part
        for(int j = 1; j <= i; j++) {
            cout << j;
        }

        // Second Part
        for(int j = 1; j < i; j++) {
            cout << j;
        }

        cout << endl;
    }
}

int main() {

    cout << "We are printing Flyods Triangle " << endl;
    flyods_triangle();
    cout << endl;

    cout << "We are printing Inverted Triangle " << endl;
    inverted_triangle_pattern();
    cout << endl;

    cout << "We are printing Inverted Triangle with Character" << endl;
    inverted_triangle_pattern_char();
    cout << endl;

    cout << "We are printing Pyramid Pattern" << endl;
    pyramid_pat();
    cout << endl;
}