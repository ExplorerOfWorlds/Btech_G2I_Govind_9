#include <stdio.h>
void main(){
    int a,b,c,d,e,total,percent;
    printf("enter marks of 5 subject");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    percent=total/5;
    if (percent>=90){

        printf("Grade A \n ");
    }
    else if(percent<90 && percent>=80){
        printf("Grade B \n ");
    }
    else if (percent<80 && percent>=60){
        printf("Grade C \n ");
    }
    else{
        printf("Grade D \n ");
    }
    printf("Total: %d, Percentage: %d\n", total, percent);
}
