// Passing 2D Array In Function Pointer

#include <stdio.h>

void Passing2DArray(int (*p)[2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%5d", *(*(p + i) + j));
        }
        printf("\n");
    }
}

int main()
{
    int arr[2][2] = {
        {10, 20},
        {30, 40}};

    Passing2DArray(arr);

    return 0;
}

//Passing mxn array size 