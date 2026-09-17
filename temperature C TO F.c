#include<stdio.h>

void main()
{
    float celc,fahr;
    printf("Enter the celsius : ");
    scanf("%f", &celc);
    fahr = (9.0 / 5.0) * celc + 32;
    printf("Celsius in fahrenheit is : %.2f\n",fahr);



}
