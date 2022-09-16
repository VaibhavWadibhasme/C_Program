/*
	The Write a program using a two-dimensional array to compute and print the
	following information from the table of data discussed above:
	
	a) total value of sale by each girl.
	b) total value of each item sold.
	c) Grand total of sales of all items by all girls
	
	the program uses the variable value in two dimensions with the index i representing girls
	and j representing items.
	
	Input data:
				item1	item2	item3
	Salesgirl1	310		257 	365
	Salesgirl2	210 	190 	325
	Salesgirl3	405 	235 	240
	Salesgirl4	260 	300 	380
*/

#include <stdio.h>
#define MAXGIRLS 4
#define MAXITEMS 3
main()
{
	int value[MAXGIRLS][MAXITEMS];
	int girl_total[MAXGIRLS] , item_total[MAXITEMS];
	int i, j, grand_total;
//--------------READING OF VALUES AND COMPUTING girl_total--------
	printf("Input data\n");
	printf("Enter values, one at a time, row-wise\n\n");
	for(i=0;i<MAXGIRLS;i++)
	{
		girl_total[i] = 0;
		for(j=0;j<MAXITEMS;j++)
		{
			scanf("%d", &value[i][j]);
			girl_total[i]=girl_total[i]+value[i][j];
		}
	}
//---------------COMPUTING item_total-------------------------
	for(j=0;j<MAXITEMS;j++)
	{
		item_total[j] = 0;
		for(i=0;i<MAXGIRLS;i++)
			item_total[j] = item_total[j] + value[i][j];
	}
//---------------COMPUTING grand_total--------------------------
	grand_total=0;
	for(i=0;i<MAXGIRLS;i++)
		grand_total=grand_total+girl_total[i];
		
//-----------------PRINTING OF RESULTS--------------------------
	printf("\n GIRLS TOTALS\n\n");
	for(i=0;i<MAXGIRLS;i++)
		printf("Salesgirl[%d] = %d\n",i+1,girl_total[i] );
	
	printf("\n ITEM TOTALS\n\n");
	for(j=0;j<MAXITEMS;j++)
		printf("Item[%d] = %d\n",j+1,item_total[j]);
	printf("\nGrand Total = %d\n", grand_total);
}

/*	OUTPUT:

	Input data
	Enter values, one at a time, row-wise
	
	310 257 365
	210 190 325
	405 235 240
	260 300 380
	
	GIRLS TOTALS
	
	Salesgirl[1] = 932
	Salesgirl[2] = 725
	Salesgirl[3] = 880
	Salesgirl[4] = 940
	
	ITEM TOTALS
	
	Item[1] = 1185
	Item[2] = 982
	Item[3] = 1310
	
	Grand Total = 3477
*/
