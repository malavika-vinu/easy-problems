#include<iostream>

int main(){

 int num1,num2,temp;
 
 std::cout<<"Enter a number: ";
 std::cin>>num1;
 
 std::cout<<"Enter another number: ";
 std::cin>>num2;
 
 std::cout<<"Before swapping:"<<std::endl;
 std::cout<<"Number 1 = "<<num1<<std::endl;
 std::cout<<"Number 2 = "<<num2<<std::endl;
 
 temp = num1;
 num1 = num2;
 num2 = temp;
 
 std::cout<<"After swapping :"<<std::endl;
 std::cout<<"Number 1 = "<<num1<<std::endl;
 std::cout<<"Number 2 = "<<num2<<std::endl;

 return 0;
}
