/*	Using conditional operators determine:
	(1) Whether the character entered through the keyboard is a
	lower case alphabet or not.
	(2) Whether a character entered through the keyboard is a
	special symbol or not.
	
	Characters 			ASCII Values
	A – Z				65 – 90
	a – z				97 – 122
	0 – 9				48 – 57
	special symbols		0 - 47, 58 - 64, 91 - 96, 123 - 127
	
*/

#include <stdio.h>

int main()
{
	char ch;
	printf("Enter the Character: ");
	ch=getche();
	
	(ch>=65&&ch<=90)?printf("\nYou Enter Upper case %c.",ch):((ch>=97&&ch<=122)?printf("\nYou Enter Lower case %c.",ch):((ch>=48&&ch<=57)?printf("\nYou Enter Number %c.",ch):((ch>=0&&ch<=47)||(ch>=58&&ch<=64)||(ch>=91&&ch<=96)||(ch>=123&&ch<=127)?printf("\nYou Enter special character %c",ch):printf("\nInput is out of context."))));
}
