#include <stdio.h>

int main() {
    int num = 10;  // Declare an integer variable
    int *ptr;      // Declare a pointer to an integer

    ptr = &num;    // Store the address of 'num' in the pointer

    printf("Before modification num = %d\n", num);

    *ptr = 20;   // Modify the value of 'num' using the pointer

    printf("After modification num = %d\n", num);

    return 0;
}

