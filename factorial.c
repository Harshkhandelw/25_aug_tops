#include<stdio.h>
main()
{
	int i,num,fact=1;
	printf("enter a Number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
	
		
		fact=fact*i;
	}
	{
		printf("factorial of %d is:%d",num,fact);
	}
}
