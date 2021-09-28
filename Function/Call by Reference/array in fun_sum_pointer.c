#include <stdio.h>
int array(int a[]){
int i, sum =0;
for(i=0;i<3;i++){
    sum=sum+a[i];
}
return (&sum);
}
void main(){
int i,*total,arr[3];
printf("enter the elements \n");
for (i=0;i<3;i++){
    scanf("%d",&arr[i]);
}

total=array(arr);
printf("sum= %d",*total);

}
