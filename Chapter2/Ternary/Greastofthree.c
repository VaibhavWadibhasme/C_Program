/*	Write a program to find the greatest of the three numbers
	entered through the keyboard using conditional operators.*/
#include <stdio.h>

int main()
{
	int n1,n2,n3;
	printf("Enter three Number: ");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	n1>n2?(n1>n3?printf("%d is gretest number.",n1):printf("%d is gretest number.",n3)):(n2>n3?printf("%d is gretest number.",n2):printf("%d is1 gretest number.",n3));
	return 0;
}
