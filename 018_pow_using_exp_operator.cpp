//Program to find power of a number using exponent operator
#include <iostream>
#include <cmath>                               //For pow() function
using namespace std;

int main(){

 double num, power, result;
 
 cout << "Enter number and its power : ";
 cin >> num >> power;                          //Stores number and its power in its respective variables

 result = pow(num, power);

 cout << "Result = " << result << endl;       //Displays result
 
 return 0;
}
