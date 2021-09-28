#include <stdio.h>
void main(){

int a[10][10],b[10][10],c[10][10],r1,r2,c1,c2,i,j,k;

/*Reading of Matrix1*/

printf("Enter the rows and columns of first Matrix \n");
scanf ("%d %d",&r1,&c1);

printf("Enter the elements of Matrix 1 \n");

for(i=0;i<r1;i++)
    for(j=0;j<c1;j++)
    scanf("%d",&a[i][j]);

/*Reading of Matrix2*/

printf("Enter the rows and columns of second Matrix \n");
scanf ("%d %d",&r2,&c2);

printf("Enter the elements of Matrix 2 \n");

for(i=0;i<r2;i++)
    for(j=0;j<c2;j++)
    scanf("%d",&b[i][j]);


if(c2==r1){


   /*Multiplication*/

   for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
        c[i][j]=0;
        for(k=0;k<c1;k++)
            c[i][j]+=a[i][k]*b[k][j];
    }
   }


   /*printing*/
   for(i=0;i<r1;i++)
  {
    for(j=0;j<c1;j++)
    printf("%d \t",a[i][j]);
    if(j=c1-1)
      printf("\n");
  }
printf("\n");
  for(i=0;i<r2;i++)
  {
    for(j=0;j<c2;j++)
    printf("%d \t",b[i][j]);
    if(j=c2-1)
      printf("\n");
  }


   printf("Multiplication  of above matrix \n");


  for(i=0;i<r1;i++)
  {
    for(j=0;j<c2;j++)
    printf("%d \t",c[i][j]);
    if(j=c2-1)
      printf("\n");
  }

   }else{

   printf("multiplication invalid! ");
}
}
