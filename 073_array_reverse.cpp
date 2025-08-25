//Program to reverse order of elements in array
#include <iostream>
using namespace std;

int main(){

 int size, arr[100];
  
 cout << "Enter array size : ";             //Set array limit
 cin >> size;

 cout << "Enter values : ";

 for(int i = 0; i < size; i++){             //Store values in array
    cin >> arr[i];
 }
 int i = 0;
 int j = size - 1;

 while(i < j){                             //Swap first and last elements.Continue swapping all elements and stop when i > j
        int temp;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
 }

 cout << "Reversed array : ";

 for(int i = 0; i < size; i++){             //Display reversed values in array
    cout << arr[i] << " ";
 }
 cout << endl;


 return 0;
} 
