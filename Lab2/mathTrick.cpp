#include <iostream>
using namespace std;

int main(){

	//Initializing Num Variable
	int num=0;

	//Reading User Input
	cin >> num;

	//Calculation
	num =( (num*4+6)/(3+(num%2))) - num;

	//Outputs Answer
	cout << "The answer is: " << num << endl;

	return 0;
}

