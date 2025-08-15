//Program to calculate area of circle
#include <iostream>
#include <cmath>    //For M_PI function
using namespace std;

int main(){

 float radius, area;

 cout << "Enter radius of the circle : ";
 cin >> radius;                                 //Stores value in the variable

 area = M_PI * (radius * radius);               //Calculates area and stores the result

 cout << "Area of circle : " << area << endl;   //Displays area of circle

 return 0;
}
