#include <iostream>
using namespace std;

void bitWiseOperatorXoR() {
  int a = 4, b = 8;
  cout << (a ^ b) << endl;
}

void bitWiseOperatorLeftShift() {
  int a = 10;
  cout << (a >> 2) << endl;
}

void dataTypeModifierLong() {
  cout << sizeof(int) << endl;
  cout << sizeof(long int) << endl;
}

void dataTypeModifierShort() {
  cout << sizeof(int) << endl;
  cout << sizeof(short int) << endl;
}

void dataTypeModifierLongLong() {
  cout << sizeof(int) << endl;
  cout << sizeof(long long int) << endl;
}

void dataTypeModifierSignedUnSigned() {
  unsigned int x = -10; // Unsigned
  int y = 10;

  cout << x << endl;
  cout << y << endl;
}

void typedefAliases() {
  typedef unsigned short score;

  score x = 10;
  cout << sizeof(x) << endl;
}

void usingAliases() {
  using Score = unsigned long int;

  Score x = 10;
  cout << sizeof(x) << endl;
}

int main() {
  cout << "We are performing bit wise operations" << endl;

  cout << "We are testing Bitwise XoR" << endl;
  bitWiseOperatorXoR();
  cout << endl;

  cout << "We are performing Bitwise Left Shift Operator" << endl;
  bitWiseOperatorLeftShift();
  cout << endl;

  cout << "We are testing Data Type Modifiers Long" << endl;
  dataTypeModifierLong();
  cout << endl;

  cout << "We are testing Data Type Modifiers Short" << endl;
  dataTypeModifierShort();
  cout << endl;

  cout << "We are testing Data Type Modifiers Long Long" << endl;
  dataTypeModifierLongLong();
  cout << endl;

  cout << "We are testing Data Type Modifiers Signed and Unsigned" << endl;
  dataTypeModifierSignedUnSigned();
  cout << endl;

  cout << "We are testing TypeDef Aliases" << endl;
  typedefAliases();
  cout << endl;

  cout << "We are testing Using Aliases" << endl;
  usingAliases();
  cout << endl;
}