//Program to calculate cube of a number
#include <iostream>
using namespace std;

int main(){

 int num, numCube;
 
  cout << "Enter number : ";
  cin >> num;                                               //Stores number

  numCube = num * num * num;                                //Calculates cube of number

  cout << "Cube of " << num << " is " << numCube << endl;   //Displays result

 return 0;
}
