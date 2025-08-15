//Program to convert temperature from Celsius to Fahrenheit
#include<iostream>
using namespace std;

int main(){

 float celsius,fahrenheit;
 
 cout << "Enter temperature in Celsius.";
 cin >> celsius;                                //Storing temperature in Celsius 
 
 fahrenheit = (celsius * 1.8) + 32;             //Converting Celsius to Fahrenheit 
 
 cout << "Temperature in Fahrenheit:" << fahrenheit << endl;  //Displays temperature in Fahrenheit

return 0;
}
