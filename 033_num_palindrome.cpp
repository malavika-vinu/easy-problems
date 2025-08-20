//Program to find a number is palindrome
#include <iostream>
using namespace std;

int main(){

 int number, digit, orgNum, reverseNum=0;
 cout << "Enter number to check if its a palindrome : ";
 cin >> number;

 orgNum = number;                                                   //Assigning number to another variable

 while(number > 0){
      digit = number % 10;                                          //Last digit
      reverseNum = reverseNum * 10 + digit;                         //Reverse number
      number = number / 10;                                         //Removes last digit
 }
 
 if(orgNum == reverseNum){
      cout << orgNum << " is a palindrome." << endl;
 }
 else{
      cout << orgNum << " is not a palindrome." << endl;
 }


 return 0;
}
