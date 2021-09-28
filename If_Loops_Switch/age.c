//Printing Your Age..
#include <stdio.h>
void main()
{
	int a,b,c,x,y,z,p;
	printf("enter your dob \n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	printf("enter the date (today) \n");
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	if(y<=b)
	{
		if(y==b){
            if(x>=a)
                p=z-c;
            else
                p=z-c-1;
		}
		}else{
			p=z-c;


			}

	printf("Age is %d",p);

	}
