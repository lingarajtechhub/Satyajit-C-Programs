//Pointer Substraction

#include<stdio.h>

int main()
{
    char ch = 'A'; //1 char size is 1 byte

    char *p = &ch;

    printf("Before Substraction ptr value is:%u\t", p);

    p = p - 3;

    printf("\nAfter Substraction ptr value is:%u\t", p);

    return 0;
}