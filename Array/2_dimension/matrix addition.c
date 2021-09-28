#include <stdio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],i,j,r1,r2,c1,c2;
	
	printf("MATRIX 1 \n");
	printf("enter the rows and columns");
	scanf("%d%d",&r1,&c1);
	printf("enter the elements");
	for(i=0; i<r1;i++)
	for(j=0; j<c1;j++)
	scanf("%d",&a[i][j]);
	
	printf("MATRIX 2 \n");
	printf("enter the rows and columns");
	scanf("%d%d",&r2,&c2);
	printf("enter the elements");
	for(i=0; i<r2;i++)
	for(j=0; j<c2;j++)
	scanf("%d",&a[i][j]);
	
	if(c1==c2 && r1==r2)
	{
		printf("sum is = \n");
		
		for(i=0; i<r1;i++)
		{
	for(j=0; j<c1;j++)
	{
	c[i][j]=a[i][j]+b[i][j];
}
}
	

for(i=0; i<r1; i++)
{
	for(j=0;j<c1;j++){
	printf("\t %d ",c[i][j]);
	}
	printf("\n");
	}
		
		}
	
	
	
	
	
	}
