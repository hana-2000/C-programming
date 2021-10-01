#include<stdio.h>
void main()
{
	int a,b,n,s;
	printf("enter the number \n");
	scanf("%d",&n);
	a=-1;
	b=1;
	s=0;
	while(s<=n)
	{
	s=a+b;
	a=b;
	b=s;
	printf("  %d  ",s);
	}
}
