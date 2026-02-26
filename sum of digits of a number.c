#include<stdio.h>
void main(){
    int n,i,sum=0;
    printf("Enter any  number: ");
    scanf("%d",&n);
    while(n>0){
        i=n%10;
        sum=sum+i;
        n=n/10;
    }
    printf("sum of digits: %d",sum);
}
