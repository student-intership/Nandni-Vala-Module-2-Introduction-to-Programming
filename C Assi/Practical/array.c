#include<stdio.h>
main()
{
	int a[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("Enter No : ");
		scanf("%d",&a[i]);
	}
	 printf("The entered numbers are: ");
    for (i=0;i<5;i++) 
	{
        printf("%d ", a[i]); 
    }
    printf("\n"); 
}
