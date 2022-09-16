/*
	WAP in C to find occurance of first and second vowel in given sentence
*/
#include <Stdio.h>

int main()
{
	char a[50];
	int count=0,i=0;
	printf("Enter the sentance: ");
	gets(a);
	while(a[i]!='\0')
	{
		if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
		{
			if(a[i+1]=='a'||a[i+1]=='A'||a[i+1]=='e'||a[i+1]=='E'||a[i+1]=='i'||a[i+1]=='I'||a[i+1]=='o'||a[i+1]=='O'||a[i+1]=='u'||a[i+1]=='U')
				count++;
		}
		i++;
	}
	printf("Occurance of first and second Vowel %d times.",count);
	
	return 0; 
}
