#include <stdio.h>
void main()
{
    float area,peri;
    int rad;
    printf("enter the radius of circle.\n");
    scanf("%d",&rad);
    circle(rad,&area,&peri);
    printf("Area = %f",area);
    printf("perimeter = %f",peri);

}
circle(int r,float *x,float *y)
{
    *x=3.14*r*r;
    *y=2*3.14*r;
}
