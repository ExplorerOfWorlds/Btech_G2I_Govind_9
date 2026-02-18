#include<stdio.h>
void main(){
    double celcius, fahrenheit;
    printf("Enter temperature in celcius: ");
      scanf("%lf", &celcius);
      fahrenheit = (celcius * 9/5) + 32;
      printf("%.2lf celcius is equal to %.2lf fahrenheit\n", celcius, fahrenheit);
}