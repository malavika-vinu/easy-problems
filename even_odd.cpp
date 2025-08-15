//Program to check if a number is even or odd
#include<iostream>
using namespace std;

int main(){

 int number;
 
 cout << "Enter a number: ";      
 cin >> number;
 
  if(number % 2 == 0){                                   
     cout << number << " is even." << endl;             //If number is divisible by 2,it is even.
  }
  else{
     cout << number << " is odd." << endl;              //If number is not divisible by 2, it is odd.
  }

 return 0;
}
