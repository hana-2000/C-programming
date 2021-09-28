/* Sorting Names */
#include <stdio.h>
#include <string.h>
void main(){
char names[10][10],temp[10];
int i,j,num;
printf("Enter the number of names \n");
scanf("%d",&num);

printf("Enter the names \n");
for(i=0;i<num;i++)
    scanf("%s",names[i]);
/*sorting*/
for(j=0;j<num-1;j++)
for (i=0;i<(num-i)-1;i++)
    if(strcmp(names[i],names[i+1])>0)
        {
       strcpy(temp,names[i]);
       strcpy(names[i],names[i+1]);
       strcpy(names[i+1],temp);
    }

/*printing*/

for(i=0;i<num;i++){
    printf("%s\n",names[i]);
}

}
