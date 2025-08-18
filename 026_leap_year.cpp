//Program to check if year is leap year
#include <iostream>
using namespace std;

int main(){

 int year, leap = 0;
 cout << "Enter a year : ";
 cin >> year;

 if(year % 400 == 0){                                   //If year is divisible by 400, then leap year
    leap = 1;
 }
 else if(year % 4 == 0 && year % 100 !=0){              //If year is divisible by 4 and not  100, then leap year
    leap = 1;
 }
 else{
    leap = 0;
 }

 if(leap == 1){
   cout << year << " is a leap year.";
 }
 else{
   cout << year << " is not a leap year.";
 }

 return 0;
}
