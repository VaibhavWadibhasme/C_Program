/*
	=============MERGED ARRAY=================
*/

#include <stdio.h>
int main()
{
    int n1,n2,n3,i,j,k;            //Array Size Declaration
    int a[50], b[50], c[50];
    printf("Enter the size of first array: ");
    scanf("%d",&n1);
    printf("Enter the array elements: ");
    for(i = 0; i < n1; i++)      
       scanf("%d", &a[i]);
    printf("Enter the size of second array: ");
    scanf("%d",&n2);
    printf("Enter the array elements: ");
    for(i = 0; i < n2; i++)      
       scanf("%d", &b[i]);
    n3 = n1 + n2;
    i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)    //this loop will run till a or b is completely traversed
    {
        if (a[i] < b[j])
            c[k++] = a[i++];    //here, as soon as we copy an element in c, we increment the iterator so that the next element is copied at next index. 
     //When we copy an element from a to c, we increment i also because now we will compare with the next element of a.
        else
            c[k++] = b[j++];
    }
  
    while (i < n1)    //copying the leftover elements of a, if any
        c[k++] = a[i++];
  
    while (j < n2)    //copying the leftover elements of b, if any
        c[k++] = b[j++];
    
    printf("Final array after merging: ");
    for(i = 0; i < n3 ; i++)       //Print the sorted Array 
        printf(" %d ",c[i]);
    return 0;   
}
