//Program to calculate the product of first 'n' natural numbers
#include <iostream>
using namespace std;

int main(){

 int number, i, product = 1;                                          //Initialize product = 1

 cout << "Enter the number : ";
 cin >> number;                                                    //Store value

 for(i = 1; i <= number; i++){
     product = product * i;                                        //Multiply product with current number and store value for each loop
 }

 cout << "Product of first " << number << " is " << product << endl;

 return 0;
}
