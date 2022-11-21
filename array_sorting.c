//Array Sorting An Element (Ascending Order)

#include<stdio.h>

int main()
{
    int arr[5], i, j;

    printf("Enter the 5 Elements In Array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Display All Elements In Array:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    for (i = 0; i < 4; i++)//i=0,1,2,3
    {
        for ( j = i+1; j < 5; j++)//j=1,2,3,4
        {
            if(arr[i]>arr[j])//if(arr[i]<arr[j]) => Descending Order Sorting
            {
                int temp = arr[i]; //c = a
                arr[i] = arr[j];   //a = b
                arr[j] = temp;     //b = c
            }
        }
    }

    printf("After Sorting Elements Are:\n");
    for (i = 0; i < 5; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]);
    }
    return 0;
}

/*
Step-1
======
i=0 =>4
j=1,=>5
if(arr[i]>arr[j])//5 > 4
  


*/