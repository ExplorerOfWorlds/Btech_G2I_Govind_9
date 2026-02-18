#include<stdio.h>
void main()
{
    char a;
    printf("Enter K or k for kilometers or M or m for miles: ");
    scanf("%c", &a);
    if((a=='K') || (a=='k'))
    {
        float km;
        printf("You entered kilometers. Enter the value in kilometers: ");
        scanf("%f", &km);
        printf("The value in miles is: %f", km/1.60934);
    }
    else if((a=='M') || (a=='m'))
    {
        printf("You entered miles. Enter the value in miles: ");
        float miles;
        scanf("%f", &miles);
        printf("The value in kilometers is: %f", miles*1.60934);
    }
}