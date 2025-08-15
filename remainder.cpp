//Program to calculate remainder in division of 2 numbers
#include<iostream>
using namespace std;

int main(){
 
 int num1, num2, remainder;               //Declaring 2 numbers and remainder variables
 cout << "Enter a number: ";
 cin >> num1;                             //Stores first number
 
 cout << "Enter another number: ";
 cin >> num2;                             //Stores second number
 
 remainder = num1 % num2;                 //Calculates remainder in remainder variable
 cout << "The remainder of " << num1 << " / " << num2 << " = "<< remainder << endl;                          //Displays remainder
 
 return 0;
}
