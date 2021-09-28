#include <stdio.h>
void square();
void triangle();
void rectangle();
void main()
{
	int x;

	printf(" enter square=1,triangle=2, rectangle =3 \n");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
		square();
		break;
		case 2:
		triangle();
		break;
		case 3:
		rectangle();
		break;
		}

	}
	void triangle()
	{
		float A,a,b;
		printf("TRIANGLE \n");
		printf("enter the sides: ");
		scanf("%f %f",&a,&b);
		A=.5*a*b;
		printf("Area of Triangle %f",A);

}

void square()
	{
		int A,a;
		printf("SQUARE \n");
		printf("enter the side: ");
		scanf("%d",&a);
		A=(a*a);
		printf("Area of SquareS %d",A);

}

void rectangle()
	{
		int A,a,b;
		printf("RECTANGLE \n");
		printf("enter the side: ");
		scanf("%d %d",&a,&b);
		A=(a*b);
		printf("Area of Rectangle %d",A);

}
