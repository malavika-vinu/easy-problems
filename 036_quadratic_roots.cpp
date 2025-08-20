//Program to find roots of a quadratic equation
#include <iostream>
#include <cmath>                                               //For sqrt fn
using namespace std;

int main(){

 double a,b,c;

 cout << "Enter coefficients of the quadratic equation : " << endl;;
 
 cout << "a: ";
 cin >> a;
 
 cout << "b : ";
 cin >> b;
 
 cout << "c : ";
 cin >> c;
 
 double discriminant = (b * b) - (4 * a * c);
 
 if(discriminant > 0){                                         //Two distinct real roots
       double root1 = (-b + sqrt(discriminant)) / (2 * a);
       double root2 = (-b - sqrt(discriminant)) / (2 * a);

       cout << "Root 1 = " << root1 << endl;
       cout << "Root 2 = " << root2 << endl;
 }
 else if(discriminant == 0){
      double root = (-b / (2 * a));
      
      cout << "Root = " << root << endl;
 }
 else{
      double real = (-b / (2 * a));
      double imaginary = (sqrt(abs(discriminant))) / (2 * a);
      
      cout << "Root 1 = " << real << " + " << imaginary << " i " << endl;
      cout << "Root 2 = " << real << " - " << imaginary << " i " << endl;
 }

 return 0;
} 
