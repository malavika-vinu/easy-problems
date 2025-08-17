//Program to find power of a number using loop
#include <iostream>
using namespace std;

int main(){
 
double base, exp, num = 1;                       //Declaring variables for base & exponent
                                                 //Initialize result to 1
cout << "Enter number and its power : ";
cin >> base >> exp;                              //Stores number and its power in its respective variables

 int i;
 if(exp >= 0){
   for(i = 1; i <= exp; i++){                    //Multiplies number by itself 'exponent' times
      num = num * base;
   }
 }
 else{
  for(i =1; i<= -exp; i++){
     num = num * base;
  }
  num = 1 / num;                                 //Takes reciprocal for negative exponent
 }
   

 cout << base << " ^ " << exp << " is " << num << endl;
 
 return 0;
}
