#include <iostream>
using namespace std;

bool is_Prime (int);

int main(){
  unsigned long long int Big_Number = 600851475143;   
  int Count = 2, Largest_Prime;
    
  while(Count < Big_Number / 2){
    if(Big_Number % Count == 0 && is_Prime(Count)) Largest_Prime = Count;
    Count++; 
  }

  cout << Largest_Prime;
  return 0;
}

bool is_Prime(int Number){
  bool Flag = true; 
   
  if(Number % 2 == 0) Flag = false;
  else{
    for(int Count = 3; Count < Number; Count += 2){
      if(Number % Count == 0){
        Flag = false;
        break;
      }    
    }  
  }

  return Flag;   
}