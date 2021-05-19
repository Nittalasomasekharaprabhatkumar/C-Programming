/*  if number is present in fibonacci series or not.
    if present     : true  (or)
    if not present : false .

fib_series : 0 1 1 2 3 5 8 13 21 34 55 .....

sample i/p1 : 8                  sample i/p2 : 10
sample o/p1 : true        		 sample o/p2 : false

*/

// program

#include<stdio.h>
int is_fib(int num)
{
	int a=0,b=1,c=0;
	if(num==0||num==1)
	{
		return 1;
	}
	for(;;)  // it is infinite loop works like "while(1)"
	{
		c=a+b;
		a=b;
		b=c;
		if(c==num)
		{
			return 1;
		}
		else if (c>num)
		{
			return 0;
		}
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	if(is_fib(num))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}



/*
for(;1;)  is also is a infinite loop 

we can write the logic in function as 

while(1)
{
c=a+b;
a=b;
b=c;
if(c>=num)
{
break;
}
return c==num;  // here it compares c==num if c==num it returns 1,or if c!=num it returns 0
} 				  if num =8 if c=8 then c== num : 1 i.e; it returns 1.
				  if c!=num then :  0 i.e; it returns o.
				
				
in place of return num==c , we can also write by using terenary operator like
 return (num==c)?i:0   here if the condition is true it return i,which after "?" (or) it return 0,which is after semicolon
 in above return  :
 the condition after "?" should be true.
 and the condition after ":" should be false.
 
 
 */
