#include<stdio.h>
void main(){
    int a,b,c,d,e,total;
    printf("enter marks of 5 subject \n ");
      scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
      total=a+b+c+d+e;
     float percent=total/5;
      printf("total marks: %d \n",total);
      printf("percentage: %f \n",percent);
}