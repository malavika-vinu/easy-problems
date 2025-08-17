//Program to print ASCII value of a character 
#include <iostream>
using namespace std;

int main() {
 char c;
 
 cout << "Enter a character: ";
 cin >> c;                                                          
 cout << "ASCII Value of " << c << " is " << int(c) << endl;       //int(c) gives ASCII value of char c
 
 return 0;
}

