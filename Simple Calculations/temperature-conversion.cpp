#include<iostream>

int main(){

 float celsius,fahrenheit;
 
 std::cout<<"Enter temperature in Celsius.";
 std::cin>>celsius;
 
 fahrenheit=(celsius * 1.8) + 32;//Conversion formula 
 
 std::cout<<"Temperature in Fahrenheit:"<<fahrenheit<<std::endl;

return 0;
}
