
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[100],i,n,s;
	printf("enter the size");
	scanf("%d",&n);
	a[0]=0;
	a[1]=1;
		s=0;
	for(i=2; i<n; i++)
	{
		a[i]=a[i-1]+a[i-2];
		
		}
		for(i=0; i<n; i++){
		
		printf(" %d ",a[i]);
		
	}
	system("pause");
	return 0;
	
	}
