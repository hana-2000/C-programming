#include <stdio.h>
void main()
{
	int a[100],i,n,s,f;
	printf("enter the size");
	scanf("%d",&n);
	printf("enter the digits");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
		}
		printf("Search the digits");
		scanf("%d",&s);
		for(i=0; i<n; i++)
		{
			if(a[i]==s)
			{
			printf("%d is found at %d",s,i+1 );
			f=1;
		}
			if(f==0)
			printf("not found");
			}
	
	}
