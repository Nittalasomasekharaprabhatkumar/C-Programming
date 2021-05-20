/*    fin the factorial of a number

3! = 3*2*1  == 6

sample i/p=3
sample o/p=6

*/

//program

#include<stdio.h>
int fact(int num)
{
	int fact=1,i=1;
	if(num==0)
	{
		return 1;
	}
	else
	{
		while(i<=num)
		{
			fact=fact*i;
			i++;
		}
		return fact;
	}
}
int main()
{
	int num,n;
	scanf("%d",&num);
	n=fact(num);
	printf("%d",n);
	return 0;
}
