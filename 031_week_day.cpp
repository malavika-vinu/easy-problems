//Program to find day of week based on number
#include <iostream>
using namespace std;

int main(){

 int dayNumber;
 
 cout << "Enter number 1 - 7 to find day of week : ";
 cin >> dayNumber;

 switch(dayNumber){
  case 1:
      cout << "Sunday" << endl;                    // 1 - Sunday
      break;
  case 2:
      cout << "Monday" << endl;                    // 2 - Monday      
      break;
  case 3:
      cout << "Tuesday" << endl;                   // 3 - Tuesday    
      break;
  case 4:
      cout << "Wednesday" << endl;                 // 4 - Wednesday
      break;
  case 5:
      cout << "Thursday" << endl;                  // 5 - Thursday
      break;
  case 6:
      cout << "Friday" << endl;                    // 6 - Friday 
      break;
  case 7:
      cout << "Saturday" << endl;                  // 7 - Saturday
      break;
  default:
      cout << "Invalid entry!" << endl;
      break;
 }

 return 0;
}
