#include <stdio.h>
int main()
{
int a[100];
int n,i;
printf("Input size of array");
scanf("%d", &n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("double of every element\n");
for(i=0; i<n; i++)
{
printf("%d\n",a[i]*2);
}
return 0;
}
