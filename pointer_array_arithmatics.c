//Pointer Array Arithmatics

#include<stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int *p;//p holds base address of an array. arr[0]

    p = &arr[0];

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        printf("%u => %5d\n", p, *p);//value shows *(p+i)
        p++;//here address incremented p=p+1
    }

    return 0;
}