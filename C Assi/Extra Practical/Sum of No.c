#include<stdio.h>
main()
{
	int digit, n,temp,sum=0;
	
	printf("Enter No : ");
	scanf("%d",&n);
	
	temp = n;
	
	while(temp!=0)
	{
		digit = temp % 10;  // Extract the last digit
        sum += digit;       // Add the digit to the sum
        temp /= 10;
	}
	printf("The sum of the digits of %d is: %d\n", n, sum);
}
