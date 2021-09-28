#include <stdio.h>
void main()
{
    int a=10,b=20;
    swap(&a,&b);
    printf("%d %d",a,b);
}
swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;


}
