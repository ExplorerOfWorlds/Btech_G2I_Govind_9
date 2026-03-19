#include<stdio.h>
void main(){
    int a,b,c,d,e;
    printf("enter number for which factor is required:\t");
    scanf("%d",&a);
    
    printf("factors are: \t");
    for(b=1;b<=a;b++){
        c=a%b;
        d=b;
        if(c==0){
            printf("\n %d",d);
        }
    }
}
