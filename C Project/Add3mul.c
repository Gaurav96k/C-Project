#include<stdio.h>
//with return type wothout parameter
int add();
int mul();
int a,b,c;
main()
{
	int ans,m1;
	ans=add(); //function calling
	printf("\n add=%d",ans);
	
	m1=mul(); //fun call
	printf("\n mul=%d",m1);

}
int add()
{
	printf("\n enter a and b");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}
int mul()
{
	printf("\n enter a and b");
	scanf("%d%d",&a,&b);
	c=a*b;
	return c;
}
