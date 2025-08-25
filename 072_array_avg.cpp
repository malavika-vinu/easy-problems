//Program to calculate average of array elements
#include <iostream>
using namespace std;

int main(){

 int arr[100];
 double sum = 0, avg, size;
  
 cout << "Enter array size : ";             //Set array limit
 cin >> size;

 cout << "Enter values : ";

 for(int i = 0; i < size; i++){             //Store values in array
    cin >> arr[i];
 }
 
 for(int i = 0; i < size; i++){             //Calculate sum of all elements
    sum += arr[i];
 }
 
 avg = sum / size;                          //Calculate average
 
 
 cout << "Average of elements in the array : " << avg << endl;
 
 return 0;
}

