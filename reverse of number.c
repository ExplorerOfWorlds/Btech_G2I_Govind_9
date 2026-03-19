#include <stdio.h>
void main()
{
    int a, b = 0, c = 0;
    printf("enter no for reversing:\t");
    scanf("%d", & a);
    while (a > 0)
    {
        b = a % 10;
        c = c * 10 + b;
        a = a / 10;
    }
    printf("reversed no: %d\t", c);
}
