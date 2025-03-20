#include <iostream>
using namespace std;

// Square Pattern
void sqr_pat_123() {

    int rows = 4;

    for(int i = 1; i <= rows; i++ ){
        for(int j = 1; j <= rows; j++ ){
            cout << j;
        }

        cout << endl;
    }
}

void sqr_pat_ABC() {

    int rows = 4;
    for(int i = 1; i <= rows; i++ ){
        char ch = 'A';
        for(int j = 1; j <= rows; j++ ){
            cout << ch;
            ch++;
        }

        cout << endl;
    }
}

void sqr_pat_1_9_cont() {

    int rows = 3;

    int num = 1;

    for(int i = 1; i <= rows; i++ ){
        for(int j = 1; j <= rows; j++ ){
            cout << num << " ";
            num++;
        }

        cout << endl;
    }
}

// Triangle Pattern

void triangle_pat() {

    int row = 4;

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= i; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void triangle_pat_with_cont_numb() {

    int row = 4;
    
    for(int i = 1; i <= row; i++){
        int currentNumb = i;
        for(int j = 1; j <= i; j++){
            cout << currentNumb << " ";
        }
        cout << endl;
    }
}

int main() {

    sqr_pat_123();
    cout << endl;
    sqr_pat_ABC();
    cout << endl;
    sqr_pat_1_9_cont();
    cout << endl;
    triangle_pat();
    cout << endl;
    triangle_pat_with_cont_numb();
}