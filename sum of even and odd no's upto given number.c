#include<stdio.h>
void main(){
    int r,a;
    r=0;
    printf("Enter the number till which sum is required:  ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if(i%2==0){
            printf("sum of even no's: ",r+=i);
        }
        else{
            printf("sum of odd no's: ",r+=i)
        }
    }
  
}