//Program to check if number is prime
#include <iostream>
using namespace std;

int main() {
    int num, i, prime = 1;
    
    cout << "Enter number to check if its prime : ";
    cin >> num;
    
    
    for(i = 2; i <= num/2; i++){ //If any divisors except 1 and the number exists, break loop (the number is not prime)
         if(num % i == 0){
            prime = 0;
            break;
         } 
    }
      
    if(prime == 1){             //Print prime if no divisors, except 1 and number, exists 
        cout << num << " is prime." << endl;
    }
    else{
        cout << num << " is not prime." << endl;
    }
    
   

    return 0;
}
