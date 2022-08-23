/*
	Write a C program to input any alphabet and check whether it is vowel or consonante	
*/

#include <stdio.h>

int main()
{
	char ch;
	printf("Enter any Alphabet to check for Vowel or Consonante: ");
	ch=getche();
	
	//==========================Using Nested If-else==========================
	
	if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
		if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
			printf("\nYou Entered The Vowel %c.",ch);
		else
			printf("\nYou Entered The Consonante %c",ch);
	else
		printf("\nCheck your Input.");
		

	//========================Using Conditional Operator=========================
		
//	(ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')?((ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')?printf("\nYou Entered The Vowel %c.",ch):printf("\nYou Entered The Consonante %c",ch)):printf("\nCheck your Input.");
	return 0;
}
