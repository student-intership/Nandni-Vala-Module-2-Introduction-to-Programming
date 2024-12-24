#include <stdio.h>

reverseString(char str[]) 
{
    int start = 0;
    int end = strlen(str) - 1;
    char temp;
    
    while (start < end) //reversed string using temp
	{
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;//increment 
        end--;//decrement
    }
}

main()
{
    char str[100];

    printf("Enter a string: ");//input from the user
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';//// Remove the newline character if present

    reverseString(str);// // Call the function to reverse the string

    printf("Reversed string: %s\n", str);//// Output the reversed string

}

