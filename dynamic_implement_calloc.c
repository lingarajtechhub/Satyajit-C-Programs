// How To Allocate Memory Dynamically using Calloc() Function

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *p, sum = 0;

    printf("Enter The Number Of Elements To Allocate Dynamically.\n");
    scanf("%d", &n);

    p = (int *)calloc(n, sizeof(int));

    if (!p)
    {
        printf("Memory Is Not Allocated.");
    }
    else
    {
        printf("Memory is dynamically allocated.");
    }

    printf("\nEnter the elements on this dynamic allocated space:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
    }

    printf("Display the elements on dynamic allocated space:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", *(p + i));
        sum = sum + *(p + i);
    }

    free(p);

    printf("\nDynamically allocated space released & the sum of elements are: %d\n", sum);

    return 0;
}