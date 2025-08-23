//Program to calculate power of a number using recursion
#include <iostream>
using namespace std;

double power(double base, int exp){

  if(exp == 0){                                 //If exp is 0, result is 1 
      return 1.0;
  }
  else if(exp < 0){                             //If exp < 0, result is 1 / (base ^ exp)
      return 1.0 / power(base, -exp);
  }
  else{                                         //If exp > 0, base multiplies itself till exp
      return base * power(base, exp - 1);
  }

}

int main(){

double base;
int exp;

cout << " Enter number and power : ";
cin >> base >> exp;

double result = power(base, exp);                           //Calls power function

cout << base << " ^ " << exp << " : " << result << endl;


 return 0;
}
