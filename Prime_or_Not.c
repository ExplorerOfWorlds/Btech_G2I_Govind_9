#include<stdio.h>
int main()
{
int a,b,i=2;
    printf("enter the number: ");
    scanf("%d",&a);
    if(a==0 || a==1){
        printf("not prime");
    }
    else{
    for(b=2;b<a;b++)
    { 
    if(a%b==0){
        i=0;
        break;
    }
       }
       if (i==0)
       {
           printf("the number is not prime");
       }
       else
       {
           printf("the number is prime");
       }}
       return 0;
}
