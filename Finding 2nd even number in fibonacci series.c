#include<stdio.h>
int even_fib(int num)
{
	int a=0,b=1,c,even=1;
	if(num==1)
	{
		return a;
	}
	else
	{
		while(1)
		{
		c=a+b;
		a=b;
		b=c;
		if(c%2==0)
		{
			even++;
			if(even==num)
			{
				return c;
			}
		}
		}
	}
}
int main()
{
	int num,n;
	scanf("%d",&num);
	n=even_fib(num);
	printf("%d",n);
	return 0;
}
