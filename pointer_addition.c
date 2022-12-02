//Pointer Addition

#include<stdio.h>

int main()
{
    long long int n = 4;

    long long int *ptr = &n;

    printf("Before Addition Of pointer(ptr):\t%u", ptr);

    ptr = ptr + 3;//4 * 3 =12 bytes increase in value of ptr

    printf("\n After Addition Of Pointer(ptr):\t%u", ptr);

    return 0;
}