#include <iostream>
using namespace std;

// Pattern Problem Solving

// Traiangle pattern Left with Char

void triangle_pat_with_cont_char() {

    int row = 5;
    char ch = 'A';

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= i; j++) {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}

void triangle_pat_with_cont_num_row() {

    int row = 4;

    for(int i = 1; i <= row; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void triangle_pat_with_cont_num_row_reversed() {

    int row = 4;

    for(int i = 1; i <= row; i++) {
        for(int j = i; j > 0; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void triangle_pat_floyds_triangle_with_num() {

    int row = 4;
    int count = 1;

    for(int i = 1; i <= row; i++) {
        for(int j = 1; j <= i; j++) {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

void triangle_pat_floyds_triangle_with_char() {

    int row = 4;
    char ch = 'A';

    for(int i = 1; i <= row; i++) {
        for(int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

int main() {

    cout << "We are currently doing Traiangle pattern Left with Char pattern" << endl;
    triangle_pat_with_cont_char();

    cout << endl;

    cout << "We are currently doing Left with Cont Num Row pattern" << endl;
    triangle_pat_with_cont_num_row();

    cout << endl;

    cout << "We are currently doing Left with Cont Num Row Reversed pattern" << endl;
    triangle_pat_with_cont_num_row_reversed();

    cout << endl;

    cout << "We are currently doing Floyd's Triangle with Number pattern" << endl;
    triangle_pat_floyds_triangle_with_num();

    cout << endl;

    cout << "We are currently doing Floyd's Triangle with Alphabet pattern" << endl;
    triangle_pat_floyds_triangle_with_char();

    cout << endl;

    return 0;
}