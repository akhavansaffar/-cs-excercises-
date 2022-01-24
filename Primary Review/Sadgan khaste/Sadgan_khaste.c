#include <stdio.h>

int reverse(int n)
{
    int reverse=0, rem;    

    while(n!=0)    
    {    
        rem=n%10;      
        reverse=reverse*10+rem;    
        n/=10;    
    }    

    return reverse;
}

int main() {
    int a;
    int b;

    int aReverse, bReverse;

    scanf("%d" , &a);
    scanf("%d" , &b);

    aReverse = reverse(a);
    bReverse = reverse(b);

    
    if (aReverse < bReverse) {
        printf("%d < %d" , a ,b);

    } else if ( bReverse < aReverse ){
        printf("%d < %d" , b ,a);

    } else {
        printf("%d = %d" , a ,b);
    }

    return 0;
}