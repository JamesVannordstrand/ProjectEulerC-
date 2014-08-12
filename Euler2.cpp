#include <iostream>
using namespace std;

int main()
{   
  int Sum = 0, First = 1, Second = 2;

  while(Second < 4000000){ 
    if(Second % 2 == 0) Sum += Second;
    Second = First + Second;
    First = Second - First;
  }
    
  cout << Sum;
  return 0;
}