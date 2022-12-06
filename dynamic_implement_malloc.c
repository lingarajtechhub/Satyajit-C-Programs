// How to implement malloc() function dynamically in C

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *p;

    printf("Enter the number of elements you're going to allocate dynamicaly.\n");
    scanf("%d", &n);

    p = (int *)malloc(n * sizeof(int));

    printf("Enter the data the dynamically allocated space:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
    }

    printf("Now Display All Elements In Dynamically Allocated Space:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *(p + i));
    }

    free(p);

    printf("The Dynamically allocated space is now freed.");

    return 0;
}