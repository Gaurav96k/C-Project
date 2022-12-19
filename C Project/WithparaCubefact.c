#include<stdio.h>
//with return type with parameter
int cube(int side);
int fact(int n);

main()
{
	int area,ans,side,n;
	
	printf("\n enter side");
	scanf("%d",&side);
	ans=cube(side);
	printf("\n cube=%d",ans);
	printf("\n enter n");
	scanf("%d",&n);
	printf("\n factorial=%d",fact(n));
}
int cube(int side)
{
	int area;
	area=6*side*side;
	return area;
}
int fact (int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
