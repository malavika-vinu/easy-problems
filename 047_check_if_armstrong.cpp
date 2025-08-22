//Program to check if number is Armstrong number (sum of cubes of digits = number)
#include<iostream>
using namespace std;
int main ()
{
    int num, temp, rem, sum = 0;
    cout << "Enter number to be checked : ";
    cin >> num;
    temp = num;
    while (temp > 0){
        rem = temp % 10;           //Take last digit
        sum = sum + rem*rem*rem;   //add cube of digits
        temp = temp / 10;          //remove last digit     
    }
    if (sum == num){
        cout << "\n" << num << " is an Armstrong number." << endl;
    }
    else{
        cout << "\n" << num << " is not an Armstrong number." << endl;
    }
    
 return 0;
 
}