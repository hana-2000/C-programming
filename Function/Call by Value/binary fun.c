#include <stdio.h>
int binary(int arr[],int key,int beg,int end){
int mid;
 mid = (beg+end)/2;
if (key==arr[mid]){
    printf("key is found \n");
    exit(0);
}else if(key>arr[mid]){
    beg=mid;
binary(arr,key,beg,end);
}
else if(key<arr[mid]){
        end=mid;
   binary(arr,key,beg,end);
}
else
    printf("doesnot exist");

}
void main(){
    int a[100],s,k,b,e,i;
printf("enter the size of the array \n");
scanf("%d",&s);
printf("enter the elements \n");
for(i=0;i<s;i++)
    scanf("%d",&a[i]);


printf("enter the key \n");
scanf("%d",&k);
b=0;
e=s;
binary(a,k,b,e);
}


