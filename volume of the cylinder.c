#include<stdio.h>

void main()

{
    int radius,height;
    float volume;
    printf("Enter the radius of the cylinder :");
    scanf("%d",&radius);
    printf("Enter the height pf the cylinder :");
    scanf("%d",&height);
    volume = 3.14 * radius * radius * height;
    printf("The volume of the cylinder is :%.2f\n",volume);


}
