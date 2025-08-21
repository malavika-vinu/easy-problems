//Program to print numbers from n to 1
#include <iostream>
using namespace std;

int main() {
    int num;
    int i;
    cout << "Enter number : ";
    cin >> num;
    
    for(i = num; i >= 1; i--){                  //Loop to print numbers from n to 1
        
        cout << i << endl;                      //Displays numbers from n to 1
    }
    

    return 0;
}
