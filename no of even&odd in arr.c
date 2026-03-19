#include<stdio.h>
void main(){
    int a,b,arr[100];
    printf("enter the size of array:\t");
    scanf("%d",&a);
    printf("Enter elements of array:\t");
    for(b=0;b<a;b++){
        scanf("%d",&arr[b]);
    }
  int d,c=0,e=0;
  for(d=0;d<a;d++){
    if(arr[d]%2==0){
        c=c+1;
    }
else{
    e=e+1;
}
  }
printf("no of even elements:%d\n",c);
printf("no of odd elements:%d",e);}
