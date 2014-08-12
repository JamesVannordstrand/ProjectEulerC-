#include <iostream>
#include <cmath>
using namespace std;

bool is_Palindrome(int);

int main(){
  int Number, Largest_Palindrome = 0; 
  bool Flag = false;
      
  for(int Number_1 = 999; Number_1 > 1; Number_1--){
    for(int Number_2 = 999; Number_2 > 1; Number_2--){ 
      Number = Number_2 * Number_1;
      Flag = is_Palindrome(Number);
      if(Flag && Number > Largest_Palindrome) Largest_Palindrome = Number;
    }
  }  
  cout << Largest_Palindrome;
	return 0;
}

bool is_Palindrome(int Number){
  int Copy = Number;
  int New_Number;
  int Exp = 0;
   
  while(Copy >= 10){
    Copy = Copy / 10;
    Exp++;
  }
   
  Copy = Number;
  if(Exp % 2 == 0) New_Number = 1;
  else New_Number = 0;

  while(Copy > 0){
    New_Number += (Copy % 10) * pow(10, Exp);
    Copy = Copy / 10;
    Exp--;
  }
  
  return New_Number == Number;
}
