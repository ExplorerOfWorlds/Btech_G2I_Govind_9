#include<stdio.h>
void main(){
    int a,b,c[100];
    printf("enter the size of array:\t");
    scanf("%d",&a);
    printf("Enter elements of array:\t");
    for(b=0;b<a;b++){
        scanf("%d",&c[b]);
    }
    printf("%d \n",b);
    int d[a],e=0,f=0;
    for(b=a-1;b>=0;b--){
        d[e]=c[b];
        e++;
    }
    printf("elements of reversed array are:");
    for(f=0;f<a;f++){
        printf("\t%d",d[f]);
    }
}
