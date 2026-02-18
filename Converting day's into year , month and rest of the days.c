#include<stdio.h>
void main()
{
    int days;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    int years = days / 365;
    int remainder = days % 365;
    int months = remainder / 30;
    int remaining_days = remainder % 30;
    printf("Year,s: %d, Month's: %d, Rest of the Day's : %d\n", years, months, remaining_days);
}