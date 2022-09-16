// Write a program in C to count total number of alphabets, digits and 
// special characters in a string.

#include <stdio.h>


void main()
{
    char str[100];
    int alp=0, digit=0, splch=0, i=0;	
    printf("Input the string : ");
    gets(str);	
    while(str[i]!='\0')
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
        {
            alp++;
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            digit++;
        }
        else
        {
            splch++;
        }

        i++;
    }

    printf("Number of Alphabets in the string is : %d\n", alp);
    printf("Number of Digits in the string is : %d\n", digit);
    printf("Number of Special characters in the string is : %d\n\n", splch);
}

