#include<stdio.h>
#include<math.h>
int main(){
   float p,r,t;
   printf("enter principal, rate, time \n ");
   scanf("%f%f%f",&p,&r,&t);
   float si=(p*r*t)/100;
   double ci=(p*pow(1+r/100,t))-p;
   float total_amount = p + si + ci;
   printf("simple intrest: %f \n",si);
   printf("compound intrest: %lf \n",ci);
   printf("total amount: %f \n",total_amount);
}