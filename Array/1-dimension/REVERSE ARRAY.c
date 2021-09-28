#include <stdio.h>
int main(){
int a[100],i,n;
printf("size of array ");
scanf("%d",&n);
for(i=0; i<n; i++)
{
scanf("%d\n",&a[i]);
}
printf("Print the reverse order");
for(i=n-1; i>0; i--)
{
	printf("%d\n",a[i]);
}
return 0;
}
