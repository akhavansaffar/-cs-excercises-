#include <stdio.h>
#include <string.h>

int main() 
{
	char words[5][20];
	char input[20];	

	int i = 0;
	while( i < 5 )
	{
		gets(words[i]);
		i++;
	}
	int lines[5] = { 0 };int fin=0;
	
	i =0;
	while( i < 5 ) 
	{
		char *ret;
		ret = strstr(words[i], "HAFEZ");
		if(ret) 
		{
			fin = 1;
			lines[i]=1;
		}
		
		char *rett;
		rett = strstr(words[i], "MOLANA");
		if(rett) 
		{
			fin = 1;
			lines[i]=1;
		}
		
		i++;
	}
	if (fin ==0) 
	{
		printf("NOT FOUND!");
	}
	else 
	{
		i = 0;
		while( i < 5 )
		{
			if(lines[i]!=0) 
			{
				printf("%d " , i+1);
			}
			i++;
		}
	}
	return 0;
}