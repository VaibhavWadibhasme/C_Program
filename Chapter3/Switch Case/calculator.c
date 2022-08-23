/*
	Switch case
*/
#include <stdio.h>
#include <process.h>
int main()
{
	int option;
	float a,b,res;
	printf("\nPress 1:Addition\nPress 2:Substraction\nPress 3:Multiplication\nPress 4:Division\nPress 5:Exit\n");
	scanf("%d",&option);
	switch(option)
	{
		case 1:{
			printf("\nEnter Any Two Number:");
			scanf("%f%f",&a,&b);
			res=a+b;
			printf("Addition of Two Number=%f",res);
			break;
		}
		case 2:{
			printf("\nEnter Any Two Number:");
			scanf("%f%f",&a,&b);
			res=a-b;
			printf("Substraction of Two Number=%f",res);
			break;
		}
		case 3:{
			printf("\nEnter Any Two Number:");
			scanf("%f%f",&a,&b);
			res=a*b;
			printf("Multiplication of Two Number=%f",res);
			break;
		}
		case 4:{
			printf("\nEnter Any Two Number:");
			scanf("%f%f",&a,&b);
			res=a/b;
			printf("Division of Two Number=%f",res);
			break;
		}
		default :exit(0);
	}
}
