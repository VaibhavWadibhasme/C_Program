/*
	enter lower case string WAp to convert it into Upper case string
*/

#include <stdio.h>

int main()
{
	int i=0;
	char city[20];
	printf("Enter any Lower case string: ");
	gets(city);
	while(city[i]!='\0')
	{
		if(city[i]>=65&&city[i]<=87)
			city[i]=city[i]+32;
		i++;
	}
	puts(city);
}
}
