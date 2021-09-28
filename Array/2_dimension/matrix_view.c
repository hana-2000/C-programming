/* Matrix side by view */
#include <stdio.h>
void main(){

int a[2][4],b[2][2],i,j,p,q;
for(i=0;i<2;i++)
for(j=0;j<4;j++)
    scanf("%d",&a[i][j]);


for(i=0;i<2;i++)
for(j=0;j<2;j++)
    scanf("%d",&b[i][j]);


    for(i=0,p=0;i<2,p<2;i++,p++)
    {
        printf("\n \n");
        for(j=0,q=0;j<4,q<2;j++,q++)
        printf("%d  ",a[i][j]);
        printf("\t");
        printf("%d  ",b[p][q]);

    }
}
