//Program to calculate square of a number
#include <iostream>
using namespace std;

int main(){

 int num, numSquare;

  cout << "Enter number : ";
  cin >> num;                                                      //Stores number 

  numSquare = num * num;                                           //Calculates square of number
  
  cout << "Square of " << num << " is " << numSquare << endl;      //Displays result

 return 0;
}
