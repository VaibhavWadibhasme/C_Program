/*
	sin(x)=x^1/1!-x^3/3!+x^5/5!-x^7/7!+x^9/9!+..........
*/
#include <stdio.h>
#include <math.h>

int main()
{
	int terms,i;
	float sum=0.0,fact=1.0,p,x,sign=1.0,y;
	printf("Enter value of x: ");
	scanf("%f",&x);
	y=x;
	printf("Enter number of terms: ");
	scanf("%d",&terms);
	x=x*3.14/180;
	
	for(i=1;i<=terms;i++)
	{
		fact=fact*i;
		if(i%2!=0)
		{
			p=pow(x,i);
			sum=sum+sign*p/fact;
			sign=sign*(-1);
		}
	}
	printf("Sin(%f)=%f",y,sum);
	return 0;
}
