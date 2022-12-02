//Pointer Array Input And Sum

#include<stdio.h>
#define MAX 30

int main()
{
    int i, arr[MAX], sum = 0;

    int *ptr;

    int size;

    printf("Enter The SIZE Of An array:\n");
    scanf("%d", &size);

    ptr = arr;

    printf("Enter The Elements In Array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", (ptr + i));
    }

    for (int i = 0; i < size; i++)
    {
        sum = sum + *(ptr + i);
    }

    printf("Sum of Array Elements:%d\n", sum);

    return 0;
}