//Program to calculate circumference of circle
#include <iostream>
#include <cmath>  //For M_PI function
using namespace std;

int main(){

 float radius, circum;
 
 cout << "Enter radius of circle : ";
 cin >> radius;                            //Stores value in variable

 circum = 2 * M_PI * radius;              //Calculates circumference

 cout << "Circumference of circle : " << circum << endl;  //Displays result

 return 0;
}
