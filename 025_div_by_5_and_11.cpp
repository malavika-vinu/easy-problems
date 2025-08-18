//Program to check divisibility of a number by 5 and 11 
#include <iostream>
using namespace std;

int main(){
 
 int number;

 cout << "Enter a number to check its divisibility by 5 and 11 : ";
 cin >> number;

 if(number % 5 == 0 && number % 11 == 0){                         //If remainder is 0 when divided by both 5 and 11, the number is divisible by 5 and 11
   cout << number << " is divisible by 5 and 11." << endl;
 }
 else{
   cout << number << " is not divisible by 5 and 11." << endl;
 }

 return 0;
}
