/* amicable number
 given 2 numbers n1,n2 then all the sum of the factors of n1 (except n1) is equal to n2 and , all the sum of
 factors of n2(except n2) is equal to n1 then the numbers n1,n2 are called amicable numbers.
eg :
220 : 1+2+4+5+10+11+20+22+44+55+110 = 284
284 : 1+2+4+72+142 = 220
hence amicable numbers.
sample i/p : 12285  14595
sample o/p : amicable numbers

some more examples :
(1184,1210) , (17296,18416)
  
 
*/
// program

#include<stdio.h>
int factor(int n1,int n2)
{
	int i=1,res=0,re=0,j=1;
	for(i=1;i<n1;i++)
	{
		if(n1%i==0)
		{
			res=res+i;
		}
	}
	for(j=1;j<n2;j++)
	{
		if(n2%j==0)
		{
			re=re+j;
		}
	}
	if(res==n2 && re==n1)
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
	int n1,n2;
	scanf("%d%d",&n1,&n2);
	if(factor(n1,n2))
	{
		printf("amicable numbers");
	}
	else
	{
		printf("not a amicable numbers");
	}
	return 0;
}
