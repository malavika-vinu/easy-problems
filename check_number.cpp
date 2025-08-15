//Program to check if number is positive, negative or zero
#include <iostream>
using namespace std;

int main(){
 int number;
 cout << "Enter a number: ";
 cin >> number;
 
  if(number > 0){
     cout << number << " is positive." << endl;                //If number is greater than 0, it is positive
  }
  else if(number < 0){
     cout << number << " is negative." << endl;                //If number is less than 0, it is negative
  }
  else{
     cout << " The number is zero." << endl;                    //If number is not greater than or less than 0, then number is 0
  }

 return 0;
}
