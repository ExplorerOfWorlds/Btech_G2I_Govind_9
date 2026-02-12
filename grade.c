#include <stdio.h>
void main(){
    int a,b,c,d,e,total,grade;
    printf("enter marks of 5 subject");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    grade=total/5;
    if (grade>=90){
        printf("Grade A");
    }
    else if(grade<90 && grade>=80){
        printf("Grade B");
    }
    else if (grade<80 && grade>=60){
        printf("Grade C");
    }
    else{
        printf("Grade D")
    }
}