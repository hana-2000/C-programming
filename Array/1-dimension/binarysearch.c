#include <stdio.h>
void main()
{
	int a[100],i,n,s,m,b,e,f=0;
	printf("enter the size");
	scanf("%d",&n);
	printf("enter the digits");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
		}
		printf("Search the digits");
		scanf("%d",&s);
		m=n/2;
	b=0;
	e=n-1;
	while(b<=e)
	{
		m=(b+e)/2;
		if(a[m]==s)
		{
			printf("%d is found at %d",s,m+1 );
			f=1;
			break;
			}
			else if(a[m]>s)
			
				e=m-1;
				else
				b=m+1;
				}
				if(f==0)
				printf("element not found");
		
		}
		
