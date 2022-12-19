#include<stdio.h>
//with return type with parameter
int cube(int side);
int fact(int n);
main()
{
	int area,ans,side,n,ch;
	do
	{
		printf("\n 1.cube \n2.fact \n3exit");
		printf("\n enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
	printf("\n enter side");
	scanf("%d",&side);
	ans=cube(side);
	printf("\n cube=%d",ans);
	break;
	case 2:
	printf("\n enter n");
	scanf("%d",&n);
	printf("\n factorial=%d",fact(n));
	break;
	case 3:
		exit(0);
		break;
}
}
while(ch!=3);
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

