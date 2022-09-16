// compair two strings equal or not

#include <stdio.h>

int main()
{
	char str1[30],str2[30];
	int i=0,count[2]={0,0};
	printf("Enter string1: ");
	gets(str1);
	printf("Enter string2: ");
	gets(str2);
	printf("\nString 1 is ");
	puts(str1);
	printf("\nString 2 is ");
	puts(str2);
	
	while(str1[i]!='\0'||str2[i]!='\0')
	{
		if(str1[i]>str2[i])
		{
			count[1]=-1;
			break;
	    }
	    else if(str1[i]<str2[i])
	    {
	    	count[1]=1;
	    	break;
		}
		else
			count[0]=0;
		i++;
	}
	if(count[0]>count[1])
		printf("\nstr1>str2");
		
	else if(count[0]<count[1])
		printf("\nstr1<str2");
	else
		printf("\nBoth are same.");
	return 0;
}
