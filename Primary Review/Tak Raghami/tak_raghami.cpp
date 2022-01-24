#include <iostream>
using namespace std;
int main()
{

int n = 0;

	char c;

	int sumofInput = 0;
	do {
		//cin >> c;
		std::cin.get(c);
		n = c - '0';
		//cout << c;

		if (n >= 0 && n <= 9) {
			//cout << n << ": ";
			sumofInput += n;
		}
	} while (n >= 0 && n <= 9);



	while (sumofInput >= 10)
	{
		int copyofsumofinput = sumofInput;
		sumofInput = 0;
		while (copyofsumofinput > 0) {
		
			sumofInput = sumofInput + (copyofsumofinput % 10);
			copyofsumofinput = copyofsumofinput / 10;
		}

	}
	
	cout << sumofInput;
}