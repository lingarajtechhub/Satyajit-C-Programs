//Array input and display

#include<stdio.h>

int main()
{
    int arr[5], i, sum=0;

    printf("Enter the 5 values inside array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Display Elements inside the array:\n");
    printf("\n=================================\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\nDisplay Addresses of the array:\n");
    printf("\n=================================\n");
    for (i = 0; i < 5; i++)
    {
        printf("%u\t", &arr[i]);
        printf("%d bytes\t", sizeof(arr[i]));
        sum = sum + sizeof(arr[i]);
    }
    printf("\n=================================\n");
    printf("\nThis array allocated by %d bytes of memory locations.", sum);

    return 0;
}