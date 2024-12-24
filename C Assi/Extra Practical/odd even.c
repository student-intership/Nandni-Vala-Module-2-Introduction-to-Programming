#include<stdio.h>
main()
{
	int n;
	
	printf("Enter No : ");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("No is even.",n);
	}
	else
	{
		printf("No is odd.",n);
	}
}
