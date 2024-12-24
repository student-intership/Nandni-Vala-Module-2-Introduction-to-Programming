#include<stdio.h>
main()
{
	int a[4],i,sum1=0;
	for(i=0;i<4;i++)
	{
	
	  printf("Enter Number : ");
	  scanf("%d",&a[i]);
    }
	for(i=0;i<4;i++)
	{
		sum1+=a[i];
	}
	printf("sum of : %d",sum1);

}
