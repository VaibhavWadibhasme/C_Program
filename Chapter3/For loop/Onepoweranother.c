/*
	Enter two number & find one rest to the power another.
*/

#include <stdio.h>

int main()
{
	int i,n1,n2,p=1;
	printf("Enter two number: ");
	scanf("%d%d",&n1,&n2);
	for(i=1;i<=n2;i++)
		p=p*n1;
	printf("%d^%d=%d",n1,n2,p);
	return 0;
}
