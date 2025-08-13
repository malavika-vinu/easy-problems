#include<iostream>

int main(){
 
 int num1,num2,remainder;
 std::cout<<"Enter a number: ";
 std::cin>>num1;
 
 std::cout<<"Enter another number: ";
 std::cin>>num2;
 
 remainder = num1 % num2;
 std::cout<<"The remainder of "<<num1<<" / "<<num2<<" = "<<remainder<<std::endl;
 
 return 0;
}
