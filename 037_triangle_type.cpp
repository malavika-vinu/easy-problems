//Program to check if triangle is equilateral, isosceles, scalene
#include <iostream>
using namespace std;

int main(){

 float side1, side2, side3;
 
 cout << "Enter the three sides : ";
 cin >> side1 >> side2 >> side3;

 if(side1 == side2 && side2 == side3){                                  //equilateral if all sides are equal
    cout << "This is an equilateral triangle." << endl;
 }
 else if(side1 == side2 || side2 == side3 || side1 == side3){  //isosceles if any 2 sides are equal
    cout << "This is an isosceles triangle." << endl;
 }
 else{                                                         //isosceles if no sides are equal
    cout << "This is a scalene triangle." << endl;
 }

 return 0;
}

