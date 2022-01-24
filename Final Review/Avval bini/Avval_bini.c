#include <stdio.h>

int main () 
{
	int x, y;
	scanf("%d" , &x);
	scanf("%d" , &y);

	int primes [100];
	int j = 0;
	
	int i = x+1;
	while( i<y ) 
	{
		int flag = 0;
		int m = i / 2;

		int z = 2 ;
		while( z<=m ) 
		{
			if(i % z ==0 ) 
			{
				flag = 1;
				break;
			}
			z++;
		}
		if (flag == 0) 
		{
			primes[j] = i;
			j++;
		}
		i++;
	}

	if (j > 0) 
	{
		printf("%d" , primes[0]);
	}

	int k = 1;
	while( k < j ) 
	{
		printf(",%d" , primes[k]);
		k++;
	}
}