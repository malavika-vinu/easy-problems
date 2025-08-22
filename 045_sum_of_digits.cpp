//Program to calculate sum of digits of a number
#include <iostream>
using namespace std;

int main() {
    int number, sum = 0, remainder;

    cout << "Enter a number: ";
    cin >> number;

    while (number > 0) {         // Loop until the number becomes 0
        remainder = number % 10; // Get the last digit
        sum += remainder;        // Add the last digit to the sum
        number /= 10;            // Remove the last digit from the number
    }

    cout << "Sum of digits: " << sum << endl;

    return 0;

}

