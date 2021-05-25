/*   harshad number
 a number is said to be harshad number if the number is exactly divisible by its sum of digits
 
 eg : 6804      sum of digits == 6+8+0+4 = 18
  here 6804 is divisible by 18 i.e; 6804/18 = 378

sample i/p == 12
sample o/p ==true

explanation 12/(1+2) == 3

some examples harshad number : 21,111,156.
*/

// program

#include<stdio.h.>
int harshad(int num)
{
	int r=0,res=0,a=num;
	while(num)
	{
		r=num%10;
		num=num/10;
		res=res+r;
	}
	if(a%res==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	if(harshad(num))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
}
