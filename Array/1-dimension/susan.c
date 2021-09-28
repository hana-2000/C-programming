#include<stdio.h>
 int main()
 {
  int a[20],i,j,n,k;
  printf("\nEnter the size of the array :");
  scanf("%d",&n);
  printf("\nEnter the elements :");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   { 
    for(j=i+1;j<n;j++)
    {
     if(a[i]==a[j])
     {
      for(k=j;k<n;k++)
      {
       a[k]=a[k+1];
    
      }
     n--;
    j--;
   }
  }
 }
 printf("\nAfter deleting the duplicate elements");
 for(i=0;i<n;i++)
  printf("  %d",a[i]);
 printf("\n");
 return 0;
}
