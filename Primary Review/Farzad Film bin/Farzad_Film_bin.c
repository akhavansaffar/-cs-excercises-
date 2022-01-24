#include <stdio.h>

char toUpperCase(char input) {

    if (input - 'a' >= 0) {
        return (input - 'a') + 'A';
    }
    else {
        return input;
    }


}

char toLowerCase(char input) {
    
    if (input - 'a' >= 0) {
        
        return input;
    }
    else {
        return (input - 'A') + 'a';
    }


}
void upperCaseFirstChar(char s[]) {
    if (s[0]) {
        s[0] = toUpperCase(s[0]);
    }
    else {
        return;
    }


    int sp = 1;
    while (s[sp]) {
        if (s[sp] < 'A' || s[sp] > 'z') {
            sp++;
            continue;
        }
        if (s[sp - 1] == ' ') {
            
                s[sp] = toUpperCase(s[sp]);
            
        }
        else {
            
            if(s[sp]!= ' ')
                s[sp] = toLowerCase(s[sp]);
            
        }
        sp++;
    }

}
int main()
{

    int numberOfInputs = 0;
    scanf("%d" , &numberOfInputs);

	int i = 0;
    while ( i < numberOfInputs+1) {
        char input[1010];

        gets(input);
        upperCaseFirstChar(input);
        printf("%s\n" , input);
        i++;

    }
}