//Fibonacci series upto n 
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the limit for the Fibonacci series: ";
    cin >> num;

    int first = 0;
    int second = 1;

    cout << "Fibonacci series up to " << num << " : " << endl;

    if (num >= 0) {
        cout << first << endl;
    }
    if (num >= 1) {
        cout << second << endl;
    }

    int next;
    while (next <= num) {
        next = first + second;
        if (next > num) {
            break; // Stop if the next term exceeds the limit 'n'
        }
        cout << next << endl;
        first = second;         //Assign next two adjacent numbers to calculate the next number
        second = next;
    }

    

    return 0;
}