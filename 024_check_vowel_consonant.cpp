//Program to check if given character is vowel or consonant
#include <iostream>
using namespace std;

int main(){

 char c;

 cout << "Enter any alphabet : ";
 cin >> c;

 if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'){                     //Checks if entered character is alphabet
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||      //Checks for vowels (both smaller and upper case)
       c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ){
       
       cout << c << " is a vowel." << endl;
    }
    else{
       cout << c << " is a consonant." << endl;                         //If not vowel, then it is consonant
    }
 }
 else{                                                                  //If not alphabet, then invalid entry
    cout << "Invalid Entry! Try again." << endl;
 }

 return 0;
}

