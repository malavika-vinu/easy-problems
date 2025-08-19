//Program to check if character is an alphabet
#include <iostream>
using namespace std;

int main(){

 char c;
 
 cout << "Enter character : ";
 cin >> c;

 if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){        //Entered character is letter
     cout << "The character is an alphabet." << endl;
 }
 else{
     cout << "The character is not an alphabet." << endl;     //Else entered character is not alphabet
 }

return 0;
}
