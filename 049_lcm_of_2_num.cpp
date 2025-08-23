//Program to calculate lcm of 2 numbers
#include <iostream>
using namespace std;

int main(){
 int num1, num2, lcm;
 
 cout << "Enter 2 numbers to calculate lcm : ";
 cin >> num1 >> num2;
 
 if(num1 > num2){           //Store greatest integer in lcm variable
    lcm = num1;
 }
 else{
    lcm = num2;
 }
 
 while(true){
     if(lcm % num1 == 0 && lcm % num2 == 0){ //If greatest num is divisible by both, it is the lcm
        cout << "LCM of " << num1 << " and " << num2 << " : " << lcm << endl;
     break;
     }
     lcm++;
 }



 return 0;
}
