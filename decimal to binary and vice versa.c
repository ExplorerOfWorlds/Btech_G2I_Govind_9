#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c=0,d=0,e=0,f=1;
    printf("enter the base of number(2/10): ");
    scanf("%d",&a);
    if(a==10){
        printf("enter the decimal number: ");
        scanf("%d",&b);
        while(b!=0){
            c=b%2;
            d=d+c*f;
            b/=2;
            f*=10;
        }
        printf("the binary number is: %d",d);
    }
    else if(a==2){
        printf("enter the binary number: ");
        scanf("%d",&b);
        while(b!=0){
            c=b%10;
            d=d+c*pow(2,e);
            b=b/10;
            e++;
        }
        printf("the decimal number is: %d",d);
    }
}
