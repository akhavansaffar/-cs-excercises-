#include <iostream>
#include <string.h>
using namespace std;

char reVal(int n)
{
    if (n >= 0 && n <= 9)
        return (char)(n + '0');
    else
        return (char)(n - 10 + 'A');
}

void rev(char* str)
{
    int len = strlen(str);
    int i;
    for (i = 0; i < len/2; i++)
    {
        char buf = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = buf;
    }
}

char* fromDeci(char res[], int base, int inputNum)
{
    int index = 0;

    while (inputNum > 0)
    {
        res[index++] = reVal(inputNum % base);
        inputNum /= base;
    }
    res[index] = '\0';

    rev(res);

    return res;
}
int main()
{
    int inputNum, base;
    char res[100];
    cin >> inputNum >> base;
    cout << fromDeci(res, base, inputNum);
}