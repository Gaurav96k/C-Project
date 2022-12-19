#include<stdio.h>
//with return type with parameter
int add(int a,int b);
float div(float a,float b);
main()
{
	int a,b,ans;
	float x,y;
	
	printf("\n enter a&b");
	scanf("%d%d",&a,&b);
	ans=add(a,b);
	printf("\n add=%d",ans);
	printf("\n enter x and y");
	scanf("%d%d",&x,&y);
	printf("\n div=%.2f",div(x,y));
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
float div (float a,float b)
{
	float c;
	c=a/b;
	return c;
}
