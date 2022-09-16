//Copy one string into another string

#include <stdio.h>

void main()
{
    char str1[100], str2[100];
    int  i=0;	
    printf("Input the string : ");
    gets(str1);
    while(str1[i]!='\0')				//strcpy(str2,str1);
    {									//str1 will copy in str2
        str2[i] = str1[i];
        i++;
    }
    str2[i] ='\0';		    //Makes sure that the string is NULL terminated

    printf("\nThe First string is : %s\n", str1);
    printf("The Second string is : %s\n", str2);
    printf("Number of characters copied : %d\n\n", i);
}

