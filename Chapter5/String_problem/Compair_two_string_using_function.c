#include <stdio.h>

int main()
{
	char str1[]="nagpur",str2[]="pune";
	int c;
	
	c=strcmp(str1,str2);
	if(c>0)
		printf("str1>str2");
		
	else if(c<0)
		printf("str1<str2");
	else
		printf("Both are same.");
	return 0;	
	
}
