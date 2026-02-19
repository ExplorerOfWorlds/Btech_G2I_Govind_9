#include<stdio.h>
void main(){
    int a,b;
    int r;
    char op;
    printf("Enter any two numbers:  ");
    scanf("%d%d",&a,&b);
    printf("enter operand: ");
    scanf(" %c",&op);
    switch(op){
        case'+': r=a+b;
        printf("addition: %d",r);
        break;
        case'-': r=a-b;
        printf("subtraction:  %d",r);
        break;
        case'*': r=a*b;
        printf("multiplication:  %d",r);
        break;
        case'/': r=a/b;
        printf("division:  %d",r);
        break;

    }
}