#include <stdio.h>
#include <math.h>
void square();
void triangle();
void circle();
void rectangle();
void main()
{
    int x;
    printf(" \t Area calculator \n");
    printf("Choose the polygon to find the Area \n");
    printf("Choose options square 1, triangle 2,circle 3,rectangle 4 \n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:square();
        break;
        case 2:triangle();
        break;
        case 3:circle();
        break;
        case 4:rectangle();
        break;

    }
}

    void square()
    {
        int a,x;
        printf("Enter the side of square ");
        scanf("%d",&a);
        printf("Area of the Square is %d \n",a*a);
        printf("Go to Home press 1 ,exit press 0 \n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:main();
            break;
            case 0:printf("Exit");
            break;
        }

    }
    void triangle()
    {
        float a,b,c,s,A;
        int x;
       printf("enter the sides of triangle a,b,c \n");
       scanf("%f %f %f",&a,&b,&c);
       s=(a+b+c)/2;
       A=sqrt(s*(s-a)*(s-b)*(s-c));
       printf("Area of  Triangle is %f \n",A);
         printf("Go to Home press 1 ,exit press 0 \n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:main();
            break;
            case 0:printf("Exit");
            break;
        }

    }
    void circle()
    {
        float r,a;
        int x;
        printf("Enter the Radius of circle \n");
        scanf("%f",&r);
        a=(3.14*pow(r,2));
        printf("Area of Circle is %f\n",a);
          printf("Go to Home press 1 ,exit press 0 \n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:main();
            break;
            case 0:printf("Exit");
            break;
        }

    }
    void rectangle()
    {
        int a,b,x;
        printf("enter the sides of rectangle a,b \n");
        scanf("%d %d",&a,&b);
        printf("area of rectangle %d \n",a*b);
          printf("Go to Home press 1 ,exit press 0 \n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:main();
            break;
            case 0:printf("Exit");
            break;
        }

    }

