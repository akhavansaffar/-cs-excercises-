#include <stdio.h>
#include <string.h>


char reVal(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}

void strev(char* str)
{
    int len = strlen(str);
    int i=0;
    while ( i < len / 2)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
        i++;
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

    
    strev(res);

    return res;
}

int main()
{
    int inputNum, base;
    char res[100];
    scanf("%d %d" , &inputNum , &base);
    fromDeci(res, base, inputNum);
    puts(res);

    return 0;
}