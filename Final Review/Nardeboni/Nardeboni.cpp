#include <iostream>
using namespace std;
int Bmm(long long int n, long long int m)
{
	long long int z;
	if (m != 0) 
	{
		z = n%m;
		return (Bmm(m, z));
	}
	return(n);
}
int main() 
{
	long long int add1, add2, res;
	cin >> add1 >> add2;
	if (add1<0)
		add1 *= -1;
	if (add2<1)
		add2 *= -1;
	res = Bmm(add1, add2);
	cout << res;
	return(0);
}