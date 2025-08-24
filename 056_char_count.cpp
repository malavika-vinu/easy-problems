//Program to count occurrence of a character in a string
#include <iostream>
#include <string>            //For string manipulation
using namespace std;

int main(){

string inputStr;
char target;
int count = 0;

cout << "Enter a string : ";
getline(cin, inputStr);

int len = inputStr.length();                                //Calculate length of string

cout << "Enter character to count the occurrence : ";       //Set target to find its occurrence
cin >> target;

for(int i = 0; i < len; i++){                               //If target found, increment count by 1
    if(inputStr[i] == target){
        count++;
    }
}

cout << "Occurrence of " << target << " in string : " << count << endl;     //Display total occurrence

 return 0;
}
