/*
	Write a program in C to Find the Frequency of Character.
*/
#include <stdio.h>
void main(){
	char str[100],choice;
	int i,count=0;
	printf("Input the string : ");
    gets(str);
	
	printf("Input the character to find frequency: ");
	scanf("%c",&choice);
	for(i=0;str[i]!='\0';i++)
	{
       if(choice==str[i])
           count++;
	}
	printf("The frequency of '%c' is : %d\n\n", choice, count);
}

