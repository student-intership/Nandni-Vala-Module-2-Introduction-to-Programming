#include<stdio.h>
main()
{
	int n1,n2,n3;
	
	printf("Enter No N1 : ");
	scanf("%d",&n1);
	
	printf("Enter No N2 : ");
	scanf("%d",&n2);
	
	printf("Enter No N1 : ");
	scanf("%d",&n3);
	
	if(n1>n2 && n1>n3)// n1 ,n2 and n3 gretest n1 so exicute
	{
		printf("%d is greatest.",n1);
	}
	else if(n2>n1 && n2>n3)
	{
		printf("%d is greatest.",n2);
	}
	else
	{
		printf("%d is greatest.",n3);
	}
	
	if(n1<n2 && n1<n3)// n1 ,n2 and n3 smallest n1 so exicute
	{
		printf("\n%d is smallest.",n1);
	}
	else if(n2<n1 && n2<n3)
	{
		printf("\n%d is smallest.",n2);
	}
	else
	{
		printf("\n%d is smallest.",n3);
	}
}
