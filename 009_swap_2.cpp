//Program to swap two numbers from its variables
#include <iostream>
using namespace std;

int main(){

 int num1, num2, temp;
 
 cout << "Enter a number: ";
 cin >> num1;
 
 cout << "Enter another number: ";
 cin >> num2;
 
 cout << "Before swapping:" << endl;                    //Displays numbers in original variables
 cout << "Number 1 = " << num1 << endl;                 //First number in num1
 cout << "Number 2 = " << num2 << endl;                 //Second number in num2 
 
 temp = num1;                                           //Swaps the number to the other variable
 num1 = num2;                                           //Second number in num1
 num2 = temp;                                           //First number in num2
 
 cout << "After swapping :" << endl;
 cout << "Number 1 = " << num1 << endl;                 //Displays numbers in swapped variables
 cout << "Number 2 = " << num2 << endl;

 return 0;
}
