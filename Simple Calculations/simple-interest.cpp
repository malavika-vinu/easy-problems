#include<iostream>

int main(){

 float principal_amount,interest_rate,time,simple_interest;
 std::cout<<"Enter Principal Amount:";
 std::cin>>principal_amount;
 
 std::cout<<"Enter Rate of Interest:";
 std::cin>>interest_rate;
 
 std::cout<<"Enter Time period:";
 std::cin>>time;
 
 simple_interest=(principal_amount*interest_rate*time)/100;
 
 std::cout<<"Simple Interest: "<<simple_interest<<std::endl;

return 0;
}
