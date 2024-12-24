#include<stdio.h>
main()
{
	int n;
	
	printf("Enter No : ");
	scanf("%d",&n);
	
	if(n>0)
	{
		printf("No is Positive.",n);
	}
	else if(n<0)
	{
		printf("No Is Negative.",n);
	}
	else
	{
		printf("No Is Zero.",n);
	}
}
