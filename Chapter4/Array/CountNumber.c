/*
	[ 1,2,3,11,12,13,14,15,16,8,9,21,22,23,24,10,17,18,19,20,25,26,27,28,29,30]
*/
#include <stdio.h>

int main()
{
	int a[]={1,2,3,11,12,13,14,15,16,8,9,21,22,23,24,10,17,18,19,20,25,26,27,28,29,30},i,j,x=1,y=10,count=0;
	for(i=1;i<=3;i++)
	{
		for(j=0;j<26;j++)
		{
			if(a[j]>=x&&a[j]<=y)
				count++;
		}
		printf("There are %d number in Between %d and %d.\n",count,x,y);
		x=x+10;
		y=y+10;
		count=0;
	}
	return 0;
}
