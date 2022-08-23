/*
	A B C D E F G F E D C B A
	A B C D E F   F E D C B A
	A B C D E       E D C B A
	A B C D           D C B A
	A B C               C B A
	A B                   B A
	A                       A
*/
#include <stdio.h>

int main()
{
	int p=65,i,j,k;
	for(i=1;i<=6;i++)
	{
//-------------------------------------------------------
		for(j=1;j<=7-i;j++)
		{
			printf("%c ",p);
			p++;
		}
		if(i==1)
			printf("%c ",71);
//-------------------------------------------------------	
		for(k=1;k<=i;k++)
		{
			if(i!=1)
				printf("    ");
		}
		if(i!=1)
			printf("\b\b");
//-------------------------------------------------------		
		p=71-i;
		for(j=1;j<=7-i;j++)
		{
			printf("%c ",p);
			p--;
		}
		p=65;
		printf("\n");
//-------------------------------------------------------
	}
	
	return 0;
}
