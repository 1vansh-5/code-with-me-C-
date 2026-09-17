#include<stdio.h>

void main()
{
    int princ,time;
    float rate,interest;
    printf("Enter the principal amount :");
    scanf("%d",&princ);
    printf("Enter the time(yrs) :");
    scanf("%d",&time);
    printf("Enter the rate of interest :");
    scanf("%f",&rate);
    interest = (princ * rate * time) / 100;
    printf("The simple interest is : %.3f\n", interest);


}
