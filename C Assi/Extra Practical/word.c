#include <stdio.h>

main() 
{
    char sentence[200], longestWord[50], currentWord[50];
    int i,wordCount = 0, maxLength = 0, currentLength = 0;

    // Input the sentence from the user
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove the newline character if present
    sentence[strcspn(sentence, "\n")] = '\0';

    // Initialize the current word as empty
    currentWord[0] = '\0';

    // Traverse the sentence character by character
    for (i = 0; sentence[i] != '\0'; i++)
	 {
        if (isalnum(sentence[i])) 
		{ // If it's part of a word
            currentWord[currentLength++] = sentence[i];
        } 
		else if (currentLength > 0) 
		{ // End of a word
            currentWord[currentLength] = '\0'; // Terminate current word
            wordCount++;

            // Check if the current word is the longest
            if (currentLength > maxLength) 
			{
                maxLength = currentLength;
                strcpy(longestWord, currentWord);
            }
            currentLength = 0; // Reset length for the next word
        }
    }

    // If the last character was part of a word
    if (currentLength > 0) 
	{
        currentWord[currentLength] = '\0';
        wordCount++;

        // Check if the last word is the longest
        if (currentLength > maxLength)
		 {
            maxLength = currentLength;
            strcpy(longestWord, currentWord);
        }
    }

    // Output results
    printf("Number of words: %d\n", wordCount);
    printf("Longest word: %s\n", longestWord);

}

