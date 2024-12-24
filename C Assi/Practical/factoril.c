#include<stdio.h>
fact()     
{
	int i,n,fac=1;
	
	printf("Enter No : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	printf("Factorial no : %d",fac);
}

main()
{
	fact();//Funcation Call
}
