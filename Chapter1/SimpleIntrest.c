/*-------The Program to Calculate Simple intrest------------*/

#include <stdio.h>
#include <conio.h>

int main()
{
    printf("\n\t\tCalculate Simple intrest");
    float si,p,r,t;
    printf("\nEnter Principal Amount: ");
    scanf("%f",&p);
    printf("\nEnter Rate of intrest: ");
    scanf("%f",&r);
    printf("\nEnter Time period: ");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("\nSimple intrest :%f",si);
    return 0;
}