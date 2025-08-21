//Program to calculate factorial of a number
#include <iostream>
using namespace std;

int main() {
    int num;
    int i;
    int prod = 1;
    cout << "Enter number to calculate factorial : ";
    cin >> num;
    
    for(i = 1; i <= num; i++){                      //Multiplies product from 1 till (n)th number
        
        prod *= i;
      
    }
      cout << "Factorial of " << num << " = " << prod << endl;  //Displays result

    return 0;
}
