#include <stdio.h>

int main()
{
	char city[20];
	int i, count=0;
	printf("\nEnter any string:");

	//scanf("%s",&city);		//store till space 
	gets(city);					//take space
	
	//printf("City Name:%s",city);
	puts(city);
//-------------------------------------------------------------------------------
	while(city[i]!='\0')
	{
		count++;
		i++;
	}
	printf("%d",count);
	return 0;
}
