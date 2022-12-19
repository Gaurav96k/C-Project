#include<stdio.h>
void prime();
main()
{
	prime();
	
}
void prime()
{
	int n,i,count=0;
	printf("\n enter no= ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
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

