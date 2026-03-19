#include<stdio.h>
void main(){
    int n,i,count=0;
    printf("Enter any  number: ");
    scanf("%d",&n);
    while(n>0){
        i=n%10;
        count=count+1;
        n=n/10;
    }
    printf("Number of digits: %d",count);
}
