//Program to calculate gcd of 2 numbers
#include <iostream>
using namespace std;

int main() {
  int num1, num2, gcd;
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;


  if ( num2 > num1) {          // swapping num1 and num2 if num2 > num1
    int temp = num2;
    num2 = num1;
    num1 = temp;
  }
    
  for (int i = 1; i <=  num2; i++) {
    if (num1 % i == 0 && num2 % i ==0) {
      gcd = i;
    }
  }

  cout << "GCD of " << num1 << " and " << num2 << " : " << gcd << endl;

  return 0;
}