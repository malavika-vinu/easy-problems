//Program to calculate sum of array elements
#include <iostream>
using namespace std;

int main(){

 int size, arr[100], sum = 0;
  
 cout << "Enter array size : ";             //Set array limit
 cin >> size;

 cout << "Enter values : ";

 for(int i = 0; i < size; i++){             //Store values in array
    cin >> arr[i];
 }
 
 for(int i = 0; i < size; i++){             //Calculate sum of all elements
    sum += arr[i];
 }
 
 cout << "Sum of array elements : " << sum << endl;       //Display sum
 

 return 0;
}

