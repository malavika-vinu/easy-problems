//Program to display prime numbers upto n
#include <iostream>
using namespace std;
int main()
{
    int num,i,j,count = 0;
    cout << "Enter number to find prime numbers till it : ";
    cin >> num;
    for (i = 2; i <= num; i++)     //Finding prime number
    {
        count = 0;
      for (j = 2; j < i; j++)
      {
          if (i % j == 0)          //i not prime when other factors exist
          count++;
      }  
      if (count == 0)
      cout << i << endl;
    }
    
    return 0;
}
