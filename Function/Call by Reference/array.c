#include <stdio.h>
void getArray(int [],int *);
void displayArray(int [],int *);

void main(){
int arr[10],size;
getArray(arr,&size);
displayArray(arr,&size);

}

void getArray(int a[],int *s){
int i;
printf("Enter the size of array\n");
scanf("%d",s);
printf("enter the  elements \n");
for (i=0;i<*s;i++){
    scanf("%d",&a[i]);
}
}

void displayArray(int a[],int *s){
int i;
for(i=0;i<*s;i++)
    printf("%d \n",a[i]);
}
