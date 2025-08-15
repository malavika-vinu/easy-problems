//Program to find largest of 2 numbers
#include <iostream>
using namespace std;

int main(){

 int num1, num2;
 
 cout << "Enter 2 numbers : ";
 cin >> num1 >> num2;                             //Stores numbers in num1 and num2 respectively
  
  if(num1 == num2){
     cout << "The numbers are equal." << endl;    //If numbers are equal, no comparison is done
     return 0;
  }
  if(num1 > num2){
     cout << num1 << " is greater than "<< num2 << endl;    //Displays greater number after comparing
  }
  else{
     cout << num2 << " is greater than "<< num1 << endl;
  }

 return 0;

}
