// Pointer 2D Array

#include <stdio.h>

int main()
{
    int arr[3][3] = {
        {12, 56, 78},
        {98, 67, 93},
        {23, 64, 34}};

    printf("\nDisplay 2D Array Elements:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%5d", *(*(arr + i) + j));
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\narr[%d] base address is: %u\t", i, (arr + i));
        for (int j = 0; j < 3; j++)
        {
            printf("\n i = arr[%d] base address %u and address of j = arr[%d] is %u\t", i, (arr + i), j, *(arr + i) + j);
            printf("\narr[%d] base address %u and value is %d\t", i, (arr + i), *(*(arr + i) + j));
        }
    }

    return 0;
}