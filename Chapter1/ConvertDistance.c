/*----Program to convert distance----*/

#include <stdio.h>
#include <conio.h>

int main()
{
    float km,m,cm,inch,feet;
    printf("\nEnter Distance in Km: ");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    inch=cm/2.5;
    feet=inch/12;
    printf("\nThe Distance in Meter: %f\nThe Distance in CentiMeter: %f\nThe Distance in Inch: %f\nThe Distance in feet: %f",m,cm,inch,feet);
    return 0;
}