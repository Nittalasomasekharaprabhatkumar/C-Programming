#include<stdio.h>
void gen_fib(int num)
{
	int a=0,b=1,i,c;
	for(i=1;i<=num;i++)
	{
	    if(i==1)
	{
		printf("%d ",a);
	}
    if(i==2)
    {
    	printf("%d",b);
	}
	else if(i>2)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
    }
}
int main()
{
	int num;
	scanf("%d",&num);// range(how much range of fibbonaci series)
	gen_fib(num);// fun call,
	// name : gen_fib, args count : 1, 
	//args data type : int, no return type
	return 0;
}

