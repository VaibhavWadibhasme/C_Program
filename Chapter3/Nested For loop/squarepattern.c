/*
	5 5 5 5 5 5 5 5 5
	5 4 4 4 4 4 4 4 5
	5 4 3 3 3 3 3 4 5
	5 4 3 2 2 2 3 4 5
	5 4 3 2 1 2 3 4 5
	5 4 3 2 2 2 3 4 5
	5 4 3 3 3 3 3 4 5
	5 4 4 4 4 4 4 4 5
	5 5 5 5 5 5 5 5 5
*/
#include <stdio.h>
int main()
{
    int i, j, n=5;
    
    for(i=n; i>1; i--)
    {
        for(j=n;j>=1;j--)
        {
            if(j>i) printf("%d ", j);
            else printf("%d ", i);
        }
        for(j=2;j<=n;j++)
        {
            if(j>i) printf("%d ", j);
            else printf("%d ", i);
        }
        printf("\n");
    }  
    for(i=1; i<=n; i++)
    {
        for(j=n;j>=1;j--)
        {
            if(j>i) printf("%d ", j);
            else printf("%d ", i);
        }
        for(j=2;j<=n;j++)
        {
            if(j>i) printf("%d ", j);
            else printf("%d ", i);
        }
        printf("\n");
    }
    
    return 0;
}
