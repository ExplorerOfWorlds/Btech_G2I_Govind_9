#include<stdio.h>
void main(){
    int a,b,c=0,d,arr[100];
    printf("enter the size of array:\t");
    scanf("%d",&a);
    printf("Enter elements of array:\t");
    for(b=0;b<a;b++){
        scanf("%d",&arr[b]);
    }
    for(d=0;d<a;d++){
        c=c+arr[d];
    }
printf("the sum of elements of array is:\t%d",c);
}
