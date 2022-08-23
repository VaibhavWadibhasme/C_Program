/*
	write a program to print all Amstrong number.
*/

#include <stdio.h>

/*int main()
{
	int n, i=100,r1,r2,r3,num;
	while(i<=999)
	{
		num=i;
		r1=num%10;
		num=num/10;
		r2=num%10;
		num=num/10;
		r3=num%10;
		n=(r1*r1*r1)+(r2*r2*r2)+(r3*r3*r3);
		if(i==n)
			printf("%d ",n);
		i++;
	}
	return 0;
}*/


//============ANOTHER WAY TO DO SAME================
	
	int main()
	{	
		int a, b, c,i=100;
		while(i<=999)
		{
			a=i%10;
			b=i%100;
			b=(b-a)/10;
			c=i/100;
			if(c*c*c+b*b*b+a*a*a==i)
				printf("%d ",i);
			i++;
		}
		return 0;
	}

