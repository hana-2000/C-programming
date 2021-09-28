#include<stdio.h>
display (int);
void main()
{
    int i,a[2];
  printf("enter two numbers \n");
 for(i=0; i<=1;i++)
    scanf("%d",&a[i]);
    for(i=0;i<2;i++)
    {
        display(a[i]);
    }
}
display (int m)
{
   printf("%d \n",m);
}
