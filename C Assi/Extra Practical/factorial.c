#include<stdio.h>
fac()
{
	int n,i=1,fact=1;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;//1=1*5
		//5=5*4
		
		i++;
	}
	printf("%d",fact);

}
main()
{
	fac();
}
