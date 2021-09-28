#include <stdio.h>
void main(){
int r,c,a[10][10],b[10][10],i,j;
printf("enter the rows and columns of matrix\n");
scanf("%d %d",&r,&c);

/*read the matrix*/

printf("enter the elements in matrix \n");
for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    scanf("%d",&a[i][j]);

/*transpose*/

for(i=0;i<c;i++)
    for(j=0;j<r;j++)
    b[i][j]=a[j][i];


/*printing */


  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    printf("%d \t",a[i][j]);
    if(j=c-1)
      printf("\n");
  }

printf("transpose of matrix \n");


  for(i=0;i<c;i++)
  {
    for(j=0;j<r;j++)
    printf("%d \t",b[i][j]);
    if(j=r-1)
      printf("\n");
  }
}
