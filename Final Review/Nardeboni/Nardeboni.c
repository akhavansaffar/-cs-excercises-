#include <stdio.h>
int Bmm(int n,int m)
{
  int z;
  if (m != 0) 
  {
    z = n%m;
    return (Bmm(m, z));
  }
  return(n);
}
int main() 
{
  int add1, add2, res;
  scanf("%d %d" , &add1 , &add2);
  if (add1<0)
	{
 		 add1 = (-1*add1);
	}
  if (add2<0)
  	{
    	add2 *= -1;
	}
  res = Bmm(add1, add2);
  printf("%d" , res);
  return(0);
}