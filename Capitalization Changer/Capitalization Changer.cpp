#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <cctype>

using namespace std;
 
int main()
{
  char arr[] = "feu institute of technology.";
  char uppercased;

  cout << "Original String:" << endl;
  cout << arr;

  cout << "\n\nString in UPPERCASE:" << endl;
  for (int i = 0; i<strlen(arr); i++){


    uppercased = toupper(arr[i]);
    cout << uppercased;
  }

  cout << "\n\nCCS0007 Computer Programming 2";
  return 0;
}