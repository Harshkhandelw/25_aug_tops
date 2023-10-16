#include<stdio.h>
main()
{
	int year;
	printf("enter the year:");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("this is leap year");
	}
	else
	{
		printf("this is not");
	}
}
