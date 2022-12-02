//double pointer

#include<stdio.h>

int main()
{
    int a = 87, *p, **q;

    p = &a;

    q = &p;

    printf("Address Of &a:%u\t", &a);
    printf("\nvalue Of a:%d\t", a);
    printf("\nAddress Of &p:%u\t", &p);
    printf("\nValue Of p:%u\t", p);
    printf("\nAddress Of &q:%u\t", &q);
    printf("\nValue Of q:%u\t", q);
    printf("\nValue Of *p:%d\t", *p);
    printf("\nValue Of **q:%d\t", **q);

    return 0;
}