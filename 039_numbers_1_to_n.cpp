//Program to print numbers from 1 to n;
#include <iostream>
using namespace std;

int main() {
    int num;
    int i;
    cout << "Enter the last number : ";
    cin >> num;
    
    for(i = 1; i <= num; i++){                   //Loop to print numbers starting from 1 to n
        
        cout << i << endl;                       //Displays numbers from 1 to n
    }
    

    return 0;
}

