#include <iostream>
using namespace std;

int main(){
	int Number_1 = 0, Number_2 = 0;

	for(int Count = 1; Count <= 100; Count++) Number_1 += Count * Count;
	for(int Count = 1; Count <= 100; Count++) Number_2 += Count;

	cout << Number_2 * Number_2 - Number_1;
	return 0;
}