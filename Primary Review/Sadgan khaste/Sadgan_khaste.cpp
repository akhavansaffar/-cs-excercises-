#include <iostream>
using namespace std;
int main()
{
	char number1[4];
	char number2[4];

	cin >> number1;
	cin >> number2;


	int n1 = number1[0] + number1[1] * 10 + number1[2] * 100;
	int n2 = number2[0] + number2[1] * 10 + number2[2] * 100;

	if (n1 > n2) {
		cout << number2 << " < " << number1;
	}
	else if(n2 > n1){
		cout << number1 << " < " << number2;
	}
	else {
		cout << number1 << " = " << number1;
	}

}