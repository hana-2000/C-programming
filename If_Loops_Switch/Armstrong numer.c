#include <stdio.h>
void main()
{
	printf("CALCULATOR \n");
	float a,b,c;
	int x;
	printf("Enter the Numbers \n");
	scanf("%f %f",&a,&b);
	printf(" enter sum=1,subtract=2, division =3, multiplication=4 \n");
	scanf("%d",&x);
	switch(x)
	{
		case 1:c=a+b;
		printf("answer = %f",c);
		break;
		case 2:c=a-b;
		printf("answer = %f",c);
		break;
		case 4:c=a*b;
		printf("answer = %f",c);
		break;
		case 3:c=a/b;
		printf("answer = %f",c);
		break;
		default:printf("invalid number");
	}
	
	}
