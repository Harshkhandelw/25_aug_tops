#include<stdio.h>
main()
{
	int i,j,a;
	for(i=1;i<=5;i++)
	{
		for(j=i;j<5;j++)
		{
			printf(" ");
		}
		for(a=1;a<(i*2);a++)
		{
			printf("9");
		}
		printf("\n");
	}
}
