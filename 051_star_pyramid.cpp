//Program to print right star pyramid
#include <iostream>
using namespace std;

int main(){

 int row;
 
  cout << "Enter number of rows : ";              //Asks user to enter the desired number of rows
  cin >> row;

  for(int i = 1; i <= row; i++){                  //Outer loop for rows
      for(int j = 1; j <= i; j++){                //Inner loop for column and printing value
          cout << "* ";
      }
      cout << "\n";
  }

 return 0;
}

