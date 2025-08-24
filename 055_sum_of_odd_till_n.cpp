//Program to calculate sum of odd numbers till n
#include <iostream>
using namespace std;

int main(){

 int num, sum = 0, i;

 cout << "Enter number : ";
 cin >> num;

 for(i = 1; i <= num; i += 2){                      //Start adding from 1 and then increment 2 with i till number
    sum += i;
 }

 cout << "Sum of odd numbers till " << num << " : " << sum << endl;   //Display sum
 
 return 0;
}
