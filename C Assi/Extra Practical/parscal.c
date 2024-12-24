#include <stdio.h>

main() {
    int rows,i,j,space;

    // Input number of rows from user
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    // Loop to generate Pascal's Triangle
    for (i = 0; i < rows; i++)
	 {
        int coefficient = 1; // First coefficient is always 1

        // Print spaces for alignment
        for (space = 1; space <= rows - i; space++) 
		{
            printf(" ");
        }

        // Calculate and print each coefficient in the current row
        for ( j = 0; j <= i; j++) 
		{
            printf("%d ", coefficient);
            coefficient = coefficient * (i - j) / (j + 1); // Compute next coefficient
        }
        printf("\n"); // Move to the next row
    }

}

