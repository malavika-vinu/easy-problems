//Program to calculate sum of even numbers till n
#include <iostream>
using namespace std;

int main(){

 int num, sum = 0, i;
 
 cout << "Enter number : ";
 cin >> num;

 for(i = 2; i <= num; i += 2){           //Start adding from 2 and then increment 2 with i
    sum = sum + i;
 }

 cout << "Sum of even numbers till " << num << " : " << sum <<  endl;       //Display sum


 return 0;
}
