#include <iostream>
using namespace std;

int main()
{
	int number = 1, k, i, z, j, temp, donbale, sw = 1;
	cin >> k;
	for (i = 1; i <= k;)
	{
		temp = number;
		for (z = 0; temp > 9; z++)
		{
			temp /= 10;
			sw = 0;
		}
		if (sw == 0)
		{
			donbale = temp % 10;
			i++;
		}
		while (((z) && (sw == 0)) && (i <= k))
		{
			temp = number;
			for (j = z - 1; j; j--)
			{
				temp /= 10;
			}
			donbale = temp % 10;
			i++;
			z--;
		}
		if (sw == 1)
		{
			donbale = number % 10;
			i++;
		}
		number++;
	}
	cout << donbale;
	return 0;
}