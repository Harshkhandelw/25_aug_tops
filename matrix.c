#include<stdio.h>
main()
{
	int a[2][3]={4,5,6,7,8,2};
	int b[2][3]={2,3,4,6,7,8};
	int c[2][3];
	int row,col;
	
	printf("---first matrix---\n");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf(" %d ",a[row][col]);
		}
		printf("\n");
	}
	printf("---second matrix---\n");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf(" %d ",b[row][col]);
		}
		printf("\n");
	}
	printf("----addition matrix---\n");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			c[row][col]=a[row][col]+b[row][col];
			printf(" %d ",c[row][col]);
		}
		printf("\n");
	}
}
