#include <iostream>
using namespace std;

bool is_Prime(int);

int main(){
  int Count = 0, Number = 2, Prime;

  while(Count < 10001){
    if(is_Prime(Number)){
      Count++;
      Prime = Number;
    }
    Number++;
  }
    
  cout << Prime;

  return 0;
}

bool is_Prime(int Number){
  bool Flag = true;

  for(int Count = 2; Count < Number; Count++){
    if(Number % Count == 0){
      Flag = false;
      break;
    }
  }
  
  return Flag; 
}