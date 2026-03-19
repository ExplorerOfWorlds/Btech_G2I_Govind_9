#include<stdio.h>
void main(){
    int a,b,c,d,arr[100],arr2[100];
    printf("enter the size of array:\t");
    scanf("%d",&a);
    printf("Enter elements of array:\t");
    for(b=0;b<a;b++){
        scanf("%d",&arr[b]);
    }
    for(d=0;d<a;d++){
        arr2[d]=arr[d];
    }
printf("copied array elements:\t");
for(c=0;c<a;c++){
    printf("%d\t",arr2[c]);
}}
