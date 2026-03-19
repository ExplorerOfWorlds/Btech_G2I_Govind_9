#include <stdio.h>
void main()
{
    int a, b = 0, c = 0,e;
    printf("enter no for reversing:\t");
    scanf("%d", & a);
    e=a;
    while (a > 0)
    {
        b = a % 10;
        c = c * 10 + b;
        a = a / 10;
    }
 if(c==e){
     printf("palindrome number");
 }
 else{
     printf("Not a palindrome");
 }
}
