// Dynamic Memory Reallocation using reallocate() Function

#include <stdio.h>

#include <stdlib.h>

int main()
{
    int n, n2, *p;

    printf("Enter the no. of elements to be allocate dynamically;\n");
    scanf("%d", &n);

    p = (int *)malloc(n * sizeof(int));

    if (!p)
    {
        printf("Memory space is not allocated.\n");
    }
    else
    {
        printf("Memory space is ready to Allocate.\n");
    }

    printf("Before the new allocation the existing spaces are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%u\t", (p + i));
    }

    printf("\nEnter the new reallocating space:\n");
    scanf("%d", &n2);

    p = realloc(p, n2);

    printf("All spaces after reallocating:\n");
    for (int i = 0; i < n2; i++)
    {
        printf("%u\t", (p + i));
    }

    free(p); // used for remove dynamic allocated space.
    printf("\nAll dynamic allocated space now freed.");

    return 0;
}