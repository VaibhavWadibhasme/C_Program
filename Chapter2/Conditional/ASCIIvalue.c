/*	
	Any character is entered through the keyboard, write a
	program to determine whether the character entered is a
	capital letter, a small case letter, a digit or a special symbol.
	The following table shows the range of ASCII values for
	various characters.
	Characters 			ASCII Values
	A – Z				65 – 90
	a – z				97 – 122
	0 – 9				48 – 57
	special symbols		0 - 47, 58 - 64, 91 - 96, 123 - 127
*/	

#include <stdio.h>

int main()
{
	char input;
	printf("Enter any character: ");
	scanf("%c",&input);
	if(input>=65&&input<=90)
		printf("You entered Capital %c",input);
	else
	{
		if(input>=97&&input<=112)
			printf("You entered Small %c",input);
		else
		{
			if(input>=48&&input<=57)
				printf("You entered Number %c",input);
			else
				if((input>=0&&input<=47)||(input>=58&&input<=64)||(input>=91&&input<=96)||(input>=123&&input<=127))
					printf("You entered Special Character %c",input);
		}
	}
	return 0;
	
	
}

