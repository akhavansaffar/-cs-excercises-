#include <math.h>
#include <iostream>
using namespace std;
int main()
{	
	long long int n1, n2,i,s;
	int sw1,sw2=0;
	cin >> n1 >> n2;
	while (++n1 < n2)
	{
		sw1 = 1;
		for (i = 2, s = sqrt(n1);i <= s;i++)
		{
			if (!(n1%i))
			{
				sw1 = 0;
				break;
			}
		}
		if (sw2 && sw1)
			cout << ',';
		if (sw1)
		{
			cout << n1;
			sw2 = 1;
		}
	}
	return (0);
}
