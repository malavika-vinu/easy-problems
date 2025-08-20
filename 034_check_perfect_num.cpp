//Program to check if number is perfect number(sum of divisors = number)
#include <iostream>
using namespace std;

int main(){

 int number, i;
 int divisorSum = 0;
 
 cout << "Enter number : ";
 cin >> number;

 if(number <= 0){
    cout << "Please enter a positive number..." << endl;
    return 1;
 }
 else{
    for(i=1; i < number; i++){                            //Take 1 to number-1
        if(number % i == 0){                              //Check if i is a divisor of number
            divisorSum += i;                              //Add i to the sum if i is a divisor
        }
    }
 }
if(divisorSum == number){                                 
    cout << number << " is a perfect number." << endl;
}
else{
    cout << number << " is not a perfect number." << endl;
}




 return 0;
}
