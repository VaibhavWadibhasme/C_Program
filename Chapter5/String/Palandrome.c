/*
	WAP to check whether the string is palandrome or not
*/
#include<stdio.h>

int main()
{
	char a[50],b[50];
	int j=0,i=0,count=0,n=0;
	printf("Enter the String: ");
	gets(a);
	while(a[i]!='\0')
	{
		if(a[i]>=97&&a[i]<=122)		//for converting all letter in capital
			a[i]=a[i]-32;
		count++;					//count for reverse the string
		i++;
	}
	for(i=count-1;i>=0;i--)
	{
		b[j++]=a[i];
	}
	for(i=0;i<count;i++)
	{
		if(a[i]==b[i])
			n++;
		else
			break;
	}
	if(count==n)
		printf("String is palandrome.");
	else
		printf("String is not palandrome.");
	return 0;
}
