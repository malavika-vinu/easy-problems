//Program to print multiplication table of a number
#include <iostream>
using namespace std;

int main() {
    int num = 1;
    int prod, i;
    cout << "Enter the number for the multiplication table : ";
    cin >> num;
    
    for(i = 0; i <= 10; i++){                                  //Calculate the products and print table
        prod = num * i;
        cout << num << " × " << i << " = " << prod << endl;
    }
    

    return 0;
}


