//Program to check validity of triangle (given angles)
#include <iostream>
using namespace std;

int main(){

 float angle1, angle2, angle3, sum;
 
 cout << "Enter the three angles of your triangle : ";
 cin >> angle1 >> angle2 >> angle3;

 sum = angle1 + angle2 + angle3;                                  //Calculate sum of angles

 if(sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0){        //If sum is 180 and all angles are positive, triangle is valid
    cout << "The triangle is valid." << endl;
 }
 else{
    cout << "The triangle is not valid." << endl;
 }

 return 0;
}
