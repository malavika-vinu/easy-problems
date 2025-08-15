//Program to calculate simple interest
#include <iostream>
using namespace std;

int main(){

 float principal_amount, interest_rate, time, simple_interest;
 cout << "Enter Principal Amount:";
 cin >> principal_amount;                                            //Stores principal amount
 
 cout << "Enter Rate of Interest:";
 cin >> interest_rate;                                               //Stores interest rate
 
 cout << "Enter Time period:";
 cin >> time;                                                        //Stores time     
 
 simple_interest = (principal_amount * interest_rate * time) / 100;  //Calculates simple interest and stores result 
 
 cout << "Simple Interest: " << simple_interest << endl;             //Displays simple interest

return 0;
}
