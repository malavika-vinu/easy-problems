//Program to reverse a number
#include <iostream>
using namespace std;

int main() {
    int num, rev_num = 0, remainder;

    cout << "Enter an integer: ";
    cin >> num;

    while (num > 0) {     // Loop until the original number becomes 0
        remainder = num % 10;   // Get the last digit of the number
        rev_num = rev_num * 10 + remainder; //Add remainder to right position
        num /= 10;      // Remove the last digit from the original number
    }

    cout << "Reversed Number = " << rev_num << endl;

    return 0;
}