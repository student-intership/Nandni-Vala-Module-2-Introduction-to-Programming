#include<stdio.h>

main()
{
	FILE *file;        // Declare a file pointer
    char str[100];     // Declare a string buffer
    
    file = fopen("example.txt", "w"); // Open the file in write mode
    if (file == NULL) 
	{
        printf("Error opening file.\n");
        return 1;
    }

    fputs("Hello, World!\n", file);// Write a string to the file
    fclose(file);  // Close the file after writing
    printf("String written to the file successfully.\n");
    
}
