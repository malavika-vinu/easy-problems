//Program to reverse string
#include <iostream>
#include <string.h>
using namespace std;


 
int main(){

 char word[50]="programming";
 int len = strlen(word);                           //Calculates length of string
 int i, temp;

 cout << "Before reverse : " << word << endl;
 
 for(i = 0;i < len/2;i++){                  //Swaps first and last letters and continues to swap till string is reversed
        temp = word[i];
        word[i] = word[len - i - 1];
        word[len - i - 1] = temp;
 }
 
 cout << "Reversed string : " << word << endl;    //Displays reversed string
 
 return 0;
}




