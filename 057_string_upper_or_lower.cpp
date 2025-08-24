//Program to convert string to uppercase or lowercase
#include <iostream>
#include <string>      //For string manipulation
#include <algorithm>   //For transform function
#include <cctype>      //For toupper and tolower functions
using namespace std;

int main(){

 string inputStr;
 char choice;

 cout << "Enter string : ";
 getline(cin, inputStr);                                        //Store string

 string upperStr = inputStr;                                    //Copy inputStr to 2 new strings
 string lowerStr = inputStr;

 cout << "Uppercase or lowercase ? Type 'U' or 'L' : ";
 cin >> choice;
 
 switch(choice){
    case 'U' :                                                  //If choice is upper, transfrom characters to uppercase
        transform(upperStr.begin(), upperStr.end(), upperStr.begin(), ::toupper);
        cout << "Uppercase : " << upperStr << endl;
        break;
    case 'L' :                                                  //If choice is lower, transform characters to lowercase
        transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
        cout << "Lowercase : " << lowerStr << endl;
        break;
    default :                                                   //If choice is neither, invalid response
        cout << "Invalid Response. Please enter 'U' or 'L' " << endl;
        break;
 }

 return 0;
}

