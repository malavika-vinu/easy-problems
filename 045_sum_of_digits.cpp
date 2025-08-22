//Program to calculate sum of digits of a number
#include <iostream>

int main() {
    int number, sum = 0, remainder;

    std::cout << "Enter a number: ";
    std::cin >> number;

    // Loop until the number becomes 0
    while (number > 0) {
        remainder = number % 10; // Get the last digit
        sum += remainder;        // Add the last digit to the sum
        number /= 10;            // Remove the last digit from the number
    }

    std::cout << "Sum of digits: " << sum << std::endl;

    return 0;
}