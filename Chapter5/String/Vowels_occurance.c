/*
	WAP in C to find occurance of vowel in given sentence
*/
#include <Stdio.h>

int main()
{
	char a[50];
	int count[5]={0,0,0,0,0},i=0;
	printf("Enter the sentance: ");
	gets(a);
	while(a[i]!='\0')
	{
		if(a[i]=='a'||a[i]=='A')
			count[0]++;
		else if(a[i]=='e'||a[i]=='E')
			count[1]++;
		else if(a[i]=='i'||a[i]=='I')
			count[2]++;
		else if(a[i]=='o'||a[i]=='O')
			count[3]++;
		else if(a[i]=='u'||a[i]=='U')
			count[4]++;
		i++;
	}
	printf("\nVowels occurance a is %d times.",count[0]);
	printf("\nVowels occurance e is %d times.",count[1]);
	printf("\nVowels occurance i is %d times.",count[2]);
	printf("\nVowels occurance o is %d times.",count[3]);
	printf("\nVowels occurance u is %d times.",count[4]);
	return 0;
}
