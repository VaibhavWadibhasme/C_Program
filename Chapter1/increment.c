#include <stdio.h>
#include <conio.h>

int main()
{
	int x=5,y,z;
	y=x++;
	z=++x;
	printf("x=%d\ny=%d\nz=%d",x,y,z);
	return 0;
}
