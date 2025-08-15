//Program to execute area of rectangle
#include<iostream>
using namespace std;

int main(){

 int length, breadth, area;                 //Declaring length,breadth and area
 
 cout << "Enter length and breadth of the rectangle.";
 
 cin >> length >> breadth;                  //Stores value for length and breadth
 
 area = length * breadth;                   //Calculate area

 cout << "The area :" << area << endl;      //Displays area

return 0;

}
