/*Find out largest between two number*/

#include <stdio.h>

int main()
{
	int x,y;
	printf("Enter two number: ");
	scanf("%d%d",&x,&y);
	
	x>y?printf("%d is greater than %d",x,y):printf("%d is greater than %d",y,x);
	
	return 0;
}
