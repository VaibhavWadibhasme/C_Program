// find the number Smallest among 4 number

#include <stdio.h>

int main()
{
	int n1,n2,n3,n4;
	printf("Enter Four Number: ");
	scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
	
	if(n1<n2&&n1<n3&&n1<n4)
		printf("%d is the Smallest number.",n1);
	else if(n2<n3&&n2<n4)
		printf("%d is the Smallest number.",n2);
	else if(n3<n4)
		printf("%d is the Smallest number.",n3);
	else 
		printf("%d is the Smallest number.",n4);
	
	return 0;
}
