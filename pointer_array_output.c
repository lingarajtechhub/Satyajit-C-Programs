//Pointer Array Output

#include <stdio.h>
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

    ptr = (arr + 1);//arr[1] == (arr+1)

    printf("*(ptr)=>%d\t", *(ptr));
    printf("\n*(ptr+1)=>%d\t", *(ptr + 1));

    return 0;
}