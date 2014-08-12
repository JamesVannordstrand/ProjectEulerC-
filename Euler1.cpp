#include <iostream>
using namespace std;

int main() {
  int Sum = 0; 
  for(int Count = 1; Count < 1000; Count++){
   	if (Count % 5 == 0 || Count % 3 == 0) Sum += Count;
  } 
  cout << Sum;
  return 0;
} 