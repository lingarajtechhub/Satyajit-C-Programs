//pointer comparison operators

// >, <, >=, <=, ==, !=, 

#include<stdio.h>

int main()
{
    int x = 4, y = 6;

    int *p = &x, *q = &y;

    if(*p>*q)
        printf("*p is greater than *q\n");

    if(*p<*q)
        printf("*p is less than *q\n");

    if(*p==*q)
        printf("*p is equal to *q\n");

    if(*p!=*q)
        printf("*p is not equal to *q\n");

    return 0;
}

//Compare between array elements using pointer.