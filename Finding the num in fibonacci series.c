#include<stdio.h>
void fib_find(int num)
{
	int a=0,b=1,i,c;
	if(num==0)
	{
		printf("true");
	}
	for(i=1;i<=num;i++)
	{
		c=a+b;
		a=b;
		b=c;
		if(c==num)
		{
			printf("true");
		}

}
}
int main()
{
	int num;
	scanf("%d",&num);
	fib_find(num);
	return 0;
}
