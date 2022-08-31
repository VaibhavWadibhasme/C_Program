/*
	         1
           1   1
         1   2   1
       1   3   3   1
     1   4   6   4   1
*/

#include <stdio.h>

int main()
{
	int n,i,j,k,ele=1;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=0;k<n-i;k++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			if(j==0)
				ele=1;
			else
				ele=ele*(i-j+1)/j;
			printf("%2d",ele);
		}
		printf("\n");
	}
	return 0;
}
