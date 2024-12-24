#include<stdio.h>
main()
{
	int n,i;
	
	printf("Enter No : ");
	scanf("%d",&n);
	
	printf("Multiplication Table of %d:\n", n);
    for (i = 1; i <= 10; i++) 
	{
        printf("%d x %d = %d\n", n, i, n * i);
    }
}
