// find the number largest among 5 number

#include <stdio.h>

int main()
{
	int n1,n2,n3,n4,n5;
	printf("Enter Five Number: ");
	scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
	
	if(n1>n2&&n1>n3&&n1>n4&&n1>n5)
		printf("%d is the largest number.",n1);
	else if(n2>n3&&n2>n4&&n2>n5)
		printf("%d is the largest number.",n2);
	else if(n3>n4&&n3>n5)
		printf("%d is the largest number.",n3);
	else if(n4>n5)
		printf("%d is the largest number.",n4);
	else
		printf("%d is the largest number.",n5);
	return 0;
}
