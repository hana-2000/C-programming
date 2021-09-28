#include<stdio.h>

int mr(int n,char ar1[],char ar2[])
{
  int i,j,c=0;
  char t;
  for(i=0;ar2[i]!='\0';i++)
  {
    if(ar1[i]==ar2[i])
      {
        c++;
        for(j=i;ar1[j]!='\0';j++)
        {
          ar1[j]=ar1[j+1];
          ar2[j]=ar2[j+1];
        }
        i--;
      }
    else
      {
        for(j=i;ar2[j]!='\0';j++)
        {
          t=ar2[j];
          ar2[j]=ar2[j+1];
        }
        ar2[j-1]=t;
        i--;
      }
  }
  return n-c;
}



int main()
{
  int n;
  char ar1[1000],ar2[1000];
  printf("n=");
  scanf("%d",&n);
  printf("enter the string:");
  scanf("%s",ar1);
  printf("enter the string:");
  scanf("%s",ar2);
  int a=mr(n,ar1,ar2);
  printf("%d",a);
  return 0;
}
