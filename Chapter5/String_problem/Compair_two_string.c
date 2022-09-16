// compair two strings equal or not

#include <stdio.h>

int main()
{
	char s1[30],s2[30];
	int i=0,count[2]={0,0};
	printf("Enter string1: ");
	gets(s1);
	printf("Enter string2: ");
	gets(s2);
	printf("\nString 1 is ");
	puts(s1);
	printf("\nString 2 is ");
	puts(s2);
	while(s1[i]!='\0')
	{
		count[0]++;
		i++;
	}
	i=0;
	while(s1[i]!='\0'||s2[i]!='\0')
	{
		if(s1[i]==s2[i])
		{
			count[1]++;
		}
		i++;
	}
	if(count[0]==count[1])
		printf("\nString are same.");
	else
		printf("\nString are not same.");
	return 0;
}
