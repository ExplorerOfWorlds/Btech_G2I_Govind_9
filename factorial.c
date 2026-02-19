#include<stdio.h>
void main(){
    int a,r;
    r=1;
    printf("enter the num: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        r*=i;
    }
  printf("%d",r);  
}