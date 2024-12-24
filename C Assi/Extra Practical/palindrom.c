#include <stdio.h>

pali() 
{
    int number, original_number, digit, reversed_number = 0;

    printf("Enter No: ");
    scanf("%d", &number);

    original_number = number; 
    
    while (number > 0) {
        digit = number % 10;
        reversed_number = reversed_number * 10 + digit;
        number /= 10;  
    }

    if (original_number == reversed_number) {
        printf("%d is a palindrome number.\n", original_number);
    } else {
        printf("%d is not a palindrome number.\n", original_number);
    }
}

main()
{
    pali();  // Call the function
}

