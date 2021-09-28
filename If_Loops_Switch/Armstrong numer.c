#include <stdio.h>
void main()
{
	int n,r,d,N;
	printf("Enter the Digit ");
	scanf("%d",&n);
	N=n;
	d=0;
	while(n>0)
	{
		r=n%10;
		d=(r*r*r)+d;
		n=n/10;
		
		}
		if(d==N){
						printf("%d is ARMSTRONG NUMBER",N);
	}else{
		printf("%d is not ARMSTRONG NUMBER",N);
		}
	
	
	}


	
