//Array passing through function by help of pointer

#include<stdio.h>

void passing_array_function(int *p,int m)//p = &arr[0]
{

    int i = 0;
    for (; i < m; i++)
    {
        printf("%5d", *(p + i)); //*p => p++
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};

    int size = sizeof(arr) / sizeof(arr[0]);

    passing_array_function(arr, size);

    return 0;
}