//Program to determine student's grade based on their marks
#include <iostream>
using namespace std;

int main(){

 float marks;
 
  cout << "Enter your marks out of 100 : ";
  cin >> marks;

  if(marks >= 90 && marks <=100){                //grade A = 90-100
      cout << "Grade : A" << endl;
  }
  else if(marks >= 80 && marks < 90){            //grade B = 80 to less than 90
      cout << "Grade : B" << endl;
  }
  else if(marks >= 70 && marks < 80){            //grade C = 70 to less than 80
      cout << "Grade : C" << endl;
  }
  else if(marks >= 60 && marks < 70){            //grade D = 60 to less than 70
      cout << "Grade : D" << endl;
  }
  else if(marks >= 50 && marks < 60){            //grade E = 50 to less than 60
      cout << "Grade : E" << endl;
  }
  else if(marks >=0 && marks < 50){              //grade F = 0 to less than 50
      cout << "Grade : F" << endl;
  }
  else{
      cout << "Invalid Entry. Try again." << endl;     
  }
  
 return 0;
}
