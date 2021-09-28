#include <stdio.h>
void main()
{
	int a[10][10],i,j,r1,c1,s;
	printf("Matrix 1 \n");
	printf("enter the rows and columns: ");
	scanf("%d%d",&r1,&c1);
	printf("enter the elements \n");
	for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
		scanf("%d",&a[i][j]);
		
		for(i=0;i<r1;i++)
		{
		for(j=0;j<c1;j++){
		printf("\t %d",a[i][j]);
	}
		printf("\n");
	}
		
		
		printf("transpose is \n")
		
		for(i=0;i<r1;i++)
		{
		for(j=0;j<c1;j++){
		printf("\t %d",a[j][i]);
	}
		printf("\n");
	}
	} 
