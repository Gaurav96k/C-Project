#include<stdio.h>
//without return type with parameter
void prime(int n);
main()
{
int n;
printf("\n enter no= ");
scanf("%d",&n);
prime(n);	
}
void prime(int n)
{
	int i,count=0;
	for (i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("\n it is prime no");
	}
	else
	{
		printf("\n it is not prime no");
	}
}

