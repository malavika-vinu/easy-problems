//Program to execute average of three numbers 
#include<iostream>
using namespace std;

int main(){
 
 double num1, num2, num3, average;                 //Declares 3 number and average variables
 
 cout << "Enter 3 numbers: ";
 cin >> num1 >> num2 >> num3;                      //Stores 3 numbers respectively
 
 average = (num1 + num2 + num3) / 3;               //Calculates average and stores result in average variable 
 
 cout << "Average : " << average << endl;          //Displays average
 
 return 0;
}
