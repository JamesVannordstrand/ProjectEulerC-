#include <iostream>
using namespace std;

int main(){
  int Number = 1;
  bool Flag = false;
  while(true){
    for(int Count = 1; Count <= 20; Count++){
      if(Number % Count != 0) break;
      else if(Count == 20) Flag = true;
    }
    if(Flag) break;
    Number++;
  }

  cout << Number;
  return 0;
}