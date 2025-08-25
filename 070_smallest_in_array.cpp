//Program to find smallest element in array
#include <iostream>
using namespace std;

int main(){

 int size, arr[100];
 
 cout << "Enter size of the array : ";                  //Set limit of the array
 cin >> size;

 cout << "Enter values : ";

 for(int i = 0; i < size; i++){                         //Store values in array
    cin >> arr[i];
 }

 for(int i = 1; i < size; i++){                         //If arr[0] > any number, arr[0] = number
    if(arr[0] > arr[i]){
        arr[0] = arr[i];
    }
 }

 cout << "Smallest element in the array : " << arr[0] << endl;   //Display smallest element (which is stored in arr[0])

 return 0;
}
