#include <stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j,k;
    printf("enter the rows and column of matrix A \n");
    scanf("%d%d",&r1,&c1);
    printf("enter the rows and column of matrix B \n");
    scanf("%d%d",&r2,&c2);

    printf("enter the elements of matrix A\n");
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
        scanf("%d",&a[i][j]);
     printf("enter the elements of matrix B\n");
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
        scanf("%d",&b[i][j]);
    if(c1==r2)
    {
        for(i=0;i<r1;i++)
            for(j=0;j<c2;j++)
        {
            c[i][j]=0;
            for(k=0;k<c1;k++)
            c[i][j]+=a[i][k]*b[k][j];
        }

        printf("The matrix production is \n");
      for(i=0;i<r1;i++)
      {
        for(j=0;j<c1;j++)
        printf(" %d ",a[i][j]);
            printf(" \n ");
        }

        printf(" * ");

         for(i=0;i<r2;i++)
         {
        for(j=0;j<c2;j++)

            printf(" %d ",b[i][j]);
            printf(" \n ");
        }

        printf(" = ");

         for(i=0;i<r1;i++)
         {
        for(j=0;j<c2;j++)
            printf(" %d ",c[i][j]);
            printf(" \n ");
        }


    }

}
