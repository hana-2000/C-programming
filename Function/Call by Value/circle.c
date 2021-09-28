#include <stdio.h>
#define pi 3.14

main(){
float radius,area;
float carea(float radius);

printf("\tArea of Cicle \n");
printf("enter the Radius \n");
scanf("%f",&radius);
area = carea(radius);
printf("Area of circle is %f",area);

}

float carea(float r){
float a;
a= pi*r*r;
return(a);

}
