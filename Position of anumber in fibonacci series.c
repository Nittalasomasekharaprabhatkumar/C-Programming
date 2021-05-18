/* finding the position of number in fibonacci series

Fib_series : 0 1 1 2 3 5 8 13 21 34 ........
position   : 1 2 3 4 5 6 7  8  9 10 ........

here position 0f 8 in fib series is "7".
sample i/p : 34
o/p        : 10
*/


// program

#include<stdio.h>
int pos_fib(int num)
{
	int a=0,b=1,pos=2,c=0;
	if(num==0)
	{
	printf("%d",b);
    }
    else if(num==1)
    {
    	printf("2");
	}
	else
	{
	    while(c<num)
	{
		c=a+b;
		a=b;
		b=c;
		pos++;
	}
	}	
	if(c==num)
		{
			return pos ;
		}
		else
		{
			return 0;
		}
    
}
int main()
{
	int num,n;
	scanf("%d",&num);
	if(n=pos_fib(num))
	{
		printf("%d",n);
	}
	else
	{
		printf("false");
	}
}

