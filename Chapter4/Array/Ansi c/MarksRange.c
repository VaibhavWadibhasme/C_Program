/*
	Given below is the list of marks obtained by a class of 
	50 student in annual Examination
	43 65 51 27 79 11 56 61 82 09 25 36 07 49 55 63 74
	81 49 37 40 49 16 75 87 91 33 24 58 78 65 56 76 67
	45 54 36 63 12 21 73 49 51 19 39 49 68 93 85 59
	Write a program to count the number of students belonging
	to each of following groups of marks:0-9,10-19,20-29,....100
*/

#include <stdio.h>
#define MAXVAL 50
#define COUNTER 11
main()
{
	float value[MAXVAL];
	int i, low, high;
	int group[COUNTER] = {0,0,0,0,0,0,0,0,0,0,0};
	printf("Enter Marks of 50 student: ");
	for(i=0;i<MAXVAL;i++)						//READING AND COUNTING
	{
		scanf("%f",&value[i]) ;					//READING OF VALUE
		++ group[(int)(value[i])/10];			//COUNTING FREQUENCY OF GROUPS
	}
	
	/*-------------PRINTING OF FREQUENCY TABLE------------*/
	printf("\n");
	printf("GROUP\tRANGE\t FREQUENCY\n\n") ;
	for(i=0;i<COUNTER;i++)
	{
		low=i*10;
		if(i==10)
			high=100 ;
		else
			high=low+9;
	printf(" %2d %4d to %3d %5d\n",i+1, low, high, group[i] ) ;
	
	}
}
