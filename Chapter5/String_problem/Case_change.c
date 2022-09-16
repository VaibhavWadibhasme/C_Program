/*
	Write a program in C to read a sentence and replace lowercase
	characters by uppercase and vice-versa.
*/
#include <stdio.h>

int main()
{
	int i=0;
	char str[20];
	printf("Enter any string: ");
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]>=97&&str[i]<=122)
			str[i]=str[i]-32;
		else if(str[i]>=65&&str[i]<=87)
			str[i]=str[i]+32;
		i++;
	}
	puts(str);
	return 0;
	
}
