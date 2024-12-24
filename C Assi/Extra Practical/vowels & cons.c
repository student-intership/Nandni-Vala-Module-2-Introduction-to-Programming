#include <stdio.h>
cons()
{
    char str[100];
    int i,vowels = 0, consonants = 0;

    // Input string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) // Loop through each character in the string
	 {
        char ch = tolower(str[i]); // Convert character to lowercase for easier comparison

        if (ch >= 'a' && ch <= 'z') 
		{ 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')// Check if it is an alphabet 
			{
                vowels++; // Count as a vowel
            }
			 else 
			{
                consonants++; // Count as a consonant
            }
        }
    }

    printf("Number of vowels: %d\n", vowels);    // Output the counts
    printf("Number of consonants: %d\n", consonants);

}
main()
{
	cons();
}
