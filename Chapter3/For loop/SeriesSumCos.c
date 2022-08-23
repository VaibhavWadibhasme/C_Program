/*
	cos(x)=1-x^2/2!+x^4/4!-x^6/6!+x^8/8!+..........
*/
#include <stdio.h>
#include <math.h>

int main()
{
	int terms,i;
	float sum=1.0,fact=1.0,p,x,sign=1.0,y;
	printf("Enter value of x: ");
	scanf("%f",&x);
	y=x;
	printf("Enter number of terms: ");
	scanf("%d",&terms);
	x=x*3.14/180;
	
	for(i=2;i<=terms;i++)
	{
		fact=fact*i;
		if(i%2==0)
		{
			p=pow(x,i);
			sign=sign*(-1);
			sum=sum+sign*p/fact;
		}
	}
	printf("Cos(%f)=%f",y,sum);
	return 0;
}
