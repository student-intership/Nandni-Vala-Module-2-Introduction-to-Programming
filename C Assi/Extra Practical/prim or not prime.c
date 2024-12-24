#include<stdio.h>
main()
{
	int i,n,c=0;
	
	printf("Enter No : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
		{
			printf("No Is prime.",n);
		}
		else
		{
			printf("No Is Not Prime.",n);
		}
}
