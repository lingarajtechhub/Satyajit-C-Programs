//Single Pointer

#include<stdio.h>

int main()
{
    int a = 45, *p;

    p = &a;

    printf("Value Of a:%d\t", a);//45
    printf("\nAddress Of &a:%u\t",&a);//1000
    printf("\nValue of p:%u\t", p);//1000
    printf("\nAddress Of &p:%u\t",&p);//2000
    printf("\nValue of *p:%d\t", *p);//45

    return 0;
}