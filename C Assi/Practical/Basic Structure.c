#include<stdio.h>
main()
{
	int n;
    float n1 = 0.25; // Corrected to float
    char s;

    printf("Enter No: ");
    scanf("%d", &n); // Correct usage of scanf for integer

    printf("Enter a Character: ");
    scanf(" %c", &s); // Space before %c to handle newline character

    printf("You entered number: %d\n", n);
    printf("Display No Float : %f\n",n1);
    printf("You entered character: %c\n", s);
	
}
