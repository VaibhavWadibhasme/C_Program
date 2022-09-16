
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[50]="Vaibhav",str2[50]=" Wadibhasme" ,str3[50];
	
	printf("Length of str1=%d",strlen(str1));
	printf("\nLength of str2=%d",strlen(str2));
	
	printf("\nCopy str1 in str3 : %s\n",strcpy(str3,str1));
	
	strcat(str1,str2);
	puts(str1);
	
	printf("Lower str2=%s",strlwr(str2));
	printf("\nUpper str2=%s",strupr(str2));
	
	printf("\nReverse str2=%s",strrev(str2));

	
	return 0;
}
