//Reverse Of An Array

#include<stdio.h>

int main()
{
    int arr[5];

    printf("Enter the elements inside the array:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Now reverse the array:\n");
    for (int i = 5-1; i >= 0; i--)
    {
        printf("arr[%d]=%d\n",i, arr[i]);
    }
    
    return 0;
}