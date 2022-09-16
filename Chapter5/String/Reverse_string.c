/*
	Enter the string and print it in reverse
*/
#include <stdio.h>

int main()
{
	int i=0,n=0;
	char name[20];
	printf("Enter any String: ");
	gets(name);
	while(name[i]!='\0')
	{
		n++;
		i++;
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%c",name[i]);
	}
	return 0;
}
