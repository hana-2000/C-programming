#include <stdio.h>
#include <math.h>
int rect(int,int);
 void main()
 {
     int a,b,A;
    printf("enter a,b \n");
    scanf("%d %d",&a,&b);
    A=rect(a,b);
     printf("%d",A);
 }
 int rect(int x,int y)
 {
     int area;
     area=x*y;
     return area;
 }
