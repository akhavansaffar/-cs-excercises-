#include <iostream>
using namespace std;
int main()
{

	int a, b, l;
	cin >> a >> b >> l;

	int t = 0;
	for (int i = 1; i <= l; i++) {
		if (i % 2) {
			t += a;
		}
		else {
			t += b;
		}
	
	}
    std::cout << t;
}