#include<stdio.h>
int cube();
int fact();
main()
{
	printf("\n area of cube=%d",cube());
	printf("\n factorial=%d",fact());
}
int cube()
{
	int side,area;
	printf("\n the side");
	scanf("%d",&side);
	area=6*side*side;
	return area;
}
int fact()
{
	int n,i,f=1;
	printf("\n enter n= ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
