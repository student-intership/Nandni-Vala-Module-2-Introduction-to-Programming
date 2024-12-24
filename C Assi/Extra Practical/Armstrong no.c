#include <stdio.h>

isArmstrong(int num) 
{
    int originalNum = num, sum = 0, digits = 0;

    // Count the number of digits
    while (originalNum != 0) 
	{
        digits++;
        originalNum /= 10;
    }

    originalNum = num;

    // Calculate the sum of the digits raised to the power of the number of digits
    while (originalNum != 0)
	 {
        int digit = originalNum % 10;
        sum += pow(digit, digits);
        originalNum /= 10;
    }

    // Check if the sum matches the original number
     return (sum == num);
   
}

main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) 
	{
        printf("%d is an Armstrong number.\n", num);
    } 
	else 
	{
        printf("%d is not an Armstrong number.\n", num);
    }

}

