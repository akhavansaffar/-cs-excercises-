#include <iostream>

using namespace std;

//check why quera compiler doesnt supourt strstr
char* my_strstr(char* haystack, const char* needle) {
	if (haystack == NULL || needle == NULL) {
		return NULL;
	}

	for (; *haystack; haystack++) {
		// Is the needle at this point in the haystack?
		const char* h, * n;
		for (h = haystack, n = needle; *h && *n && (*h == *n); ++h, ++n) {
			// Match is progressing
		}
		if (*n == '\0') {
			// Found match!
			return haystack;
		}
		// Didn't match here.  Try again further along haystack.
	}
	return NULL;
}

int main()
{
	int numberOfInputs = 5; //maybe const 
	int isFindSomething = 0;
	int isContain[5];
	for (int i = 0; i < numberOfInputs; i++) {
	
		isContain[i] = 0;
		char input[25];
		cin >> input;
		if (my_strstr(input, "MOLANA") || my_strstr(input, "HAFEZ")) {
			//cout << i+1 << endl; // i+ 1 :)
			isFindSomething = 1;
			isContain[i] = 1;

			continue;
		}

	}

	if (!isFindSomething) {
		cout << "NOT FOUND!";
	}
	
	for (int i = 0; i < numberOfInputs; i++) {
		if (isContain[i]) {
			cout << i + 1 << " ";
		}
	}

    
}
