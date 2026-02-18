#include<stdio.h>
void main(){
 int a,b,c;
   printf("enter 3 numbers   ");
   scanf("%d%d%d",&a,&b,&c);
   if(a>b && a>c){
    printf("largest number is a = %d",a);
   }
   else if(b>a && b>c){
    printf("largest number is b = %d",b);
   }
   else{
    printf("largest number is c = %d",c);
   }
}