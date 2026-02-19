#include<stdio.h>
void main(){
    int r,a;
    r=0;
    printf("Enter the number till which sum is required:  ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        r+=i;
    }
  printf("sum:  %d",r);
}