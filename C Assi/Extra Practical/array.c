#include <stdio.h>

#define SIZE 10

int main() {
    int n[SIZE], i, min, max;

    printf("Enter %d integers:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Enter No %d: ", i + 1);
        scanf("%d", &n[i]);
    }
    min = n[0];
    max = n[0];

    for (i = 1; i < SIZE; i++) 
	{
        if (n[i] < min) 
		{
            min = n[i];
        }
        if (n[i] > max)
		{
            max = n[i];
        }
    }

    printf("\nMinimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

}

