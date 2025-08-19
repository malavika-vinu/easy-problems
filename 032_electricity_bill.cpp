//Program to calculate electricity bill based on slab rates
#include <iostream>
using namespace std;

int main(){
  float units, bill;

  cout << "Enter unit : ";
  cin >> units;

  if(units <= 100){                                                       // upto 100 units - Rs.10
  bill = units * 10;
  }
  else if(units <= 200){                                                  //100 to 200 units - Rs.15
    bill = (100 * 10) + (units - 100) * 15;
  }
  else if(units <= 300){
    bill = (100 * 10) + (100 * 15) + (units - 200) * 20;                  //200 to 300 units - Rs.20  
  }
  else if(units > 300){
    bill = (100 * 10) + (100 * 15) + (100 * 20) + (units - 300) * 25;     //above 300 units - Rs.25
  }
  else{
    cout << "Invalid entry!";
  }
  
  cout << "Electricity bill : Rs." << bill << endl;
  

 return 0;
}
