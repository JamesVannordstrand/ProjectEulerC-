#include <iostream>
using namespace std;

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

int main(){
	long long unsigned int Sum = 0;

	for (int i = 3; i < 2000000; i += 2){	
		if(is_Prime(i)){
			Sum += i;
			cout << Sum;
		}
	}

	cout << Sum;
	return 0;
}