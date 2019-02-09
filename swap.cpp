#include <iostream>

using namespace std;

int main() {
  int number1 = 5;
  int number2 = 10;
  int temp;

  cout << "Numbers before swapping:" << endl;
  cout << "Number 1 " << number1 << endl;
  cout << "Number 2 " << number2 << endl;
  cout << "\n" << endl;

  temp = number1;
  number1 = number2;
  number2 = temp;

  cout << "Numbers after swapping: " << endl;
  cout << "Number 1 " << number1 << endl;
  cout << "Number 2 " << number2 << endl;
  cout << "\n" << endl;

  return 0; 
}