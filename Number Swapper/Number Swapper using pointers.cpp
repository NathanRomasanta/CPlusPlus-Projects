#include <iostream>
using namespace std;
 
void swap(int *num1, int *num2) 
{
    
    int temp;
   
    
    temp = *num1;
   *num1 = *num2;
   *num2 = temp;
   
   
}
 
int main() {
   system("clear");
   
   int num1 = 5;
   int num2 = 10;

   
   cout<<"The first number is " << num1 << endl;
   cout<<"The second number is " << num2 << endl;

   swap(&num1, &num2);
   
   cout << "\nAfter swapping" << endl;
   cout<<"First number : "<< num1 << endl;
   cout<<"Second number: "<<num2 << endl;
   return 0;
}
