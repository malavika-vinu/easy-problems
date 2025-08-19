//Program to check if character is digit
#include <iostream>
using namespace std;

int main(){

 char c;

 cout << "Enter character : " << endl;
 cin >> c;

 if(c >= '0' && c <= '9'){                             //If entered character is digit
    cout << "The character is a digit." << endl;
 }
 else{
    cout << "The character is not a digit." << endl;   //Else entered character is not digit
 }

 return 0;
}
