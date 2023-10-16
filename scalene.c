#include<stdio.h>
main()
{
	int side1,side2,side3;
	printf("enter the value of side1 side2 side3:");
	scanf("%d %d %d",&side1,&side2,&side3);
	if(side1==side2 && side2==side3)
	{
		printf("triangle is equilateral");
	}
	else if(side2==side3 || side3==side1)
	{
		printf("triangle is isosceles");
	}
	else
	
	{
		printf("triangle is scalene");
	}
}
