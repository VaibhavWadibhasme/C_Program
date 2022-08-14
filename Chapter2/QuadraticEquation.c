/*	Find out the roots of Quadratic equation.
	
	ax2+bx+c=0 where a!=0
	
	discreminant=b*b-4*a*c
	
	discreminant>0
	root1=-b+sqrt(b*b-4ac)/2a
	root2=-b-sqrt(b*b-4ac)/2a
	
	discreminant==0
	root1=root2=-b/2*a
	
	discreminant<0
	root1=-b/2*a+i(sqrt(-(b*b-4*a*c)))/2*a
	root1=-b/2*a-i(sqrt(-(b*b-4*a*c)))/2*a
	
*/
#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c,root1,root2,discreminant,x,y;
	printf("Enter the value of a,b,c: ");
	scanf("%f%f%f",&a,&b,&c);
	discreminant=b*b-4*a*c;
	if(a==0)
		printf("Roots can not be find as value of a is 0.");
	else
	{
		if(discreminant>0)
		{
			root1=(-b+sqrt(b*b-4*a*c))/(2*a);
			root2=(-b-sqrt(b*b-4*a*c))/(2*a);
			printf("Roots are %f & %f",root1,root2);
		}
		else
			if(discreminant==0)
			{
				root1=root2=-b/(2*a);
				printf("Roots are %f & %f",root1,root2);
			}
			else
				if(discreminant<0)
				{
					x=-b/(2*a);
					y=(sqrt(-(b*b-4*a*c)))/(2*a);
					printf("Roots are %.2f+i%.2f & %.2f-i%.2f",x,y,x,y);
				}
	}
	return 0;
}
