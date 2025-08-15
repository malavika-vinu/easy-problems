//Program to calculate sum of 2 numbers
#include<iostream>
using namespace std;

int main(){
 int num1, num2, sum;                     //Declaring 2 numbers and sum variables
  cout << "Enter first number:";
  cin >> num1;                            //Stores first number

  cout << "Enter second number:";
  cin >> num2;                            //Stores second number
  
  sum = num1 + num2;                      //Calculates sum and stores result in sum variable
  
  cout << "The sum of " << num1 << " and " << num2 << " is:" << sum << endl;         //Displays sum
  
  return 0;
}
