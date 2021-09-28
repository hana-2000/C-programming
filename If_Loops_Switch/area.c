#include <stdio.h>
void main()
{
	printf("select 1 for triangle or 2 for rectangle \n");
	float a,b;
	float c=0.0f;
	int x;
	scanf("%d",&x);
	if(x == 1){
		printf("type the height and breadth of triangles \n");
		scanf("%f %f",&a,&b);
		c=.5*(a*b);
		printf("area = %f",c);
		}
	else{
		printf("type the height and breadth of rectngle \n");
		scanf("%f %f",&a,&b);
		c=a*b;
		printf("area = %f",c);
		}
		
	}
