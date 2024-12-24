#include<stdio.h>
main()
{
	int n;
	
	printf("Enter No : ");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("No Is Even.",n);
	}
	else
	{
		printf("No Is Odd.",n);
	}
}
