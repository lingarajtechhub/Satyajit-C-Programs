//swap between 2 numbers using +,-
//swap between 2 numbers using *,/

#include<stdio.h>

int main()
{
    int a = 4, b = 2;

    printf("Before Swap:\n");
    printf("a=%d\t", a);//a=4
    printf("b=%d\n", b);//b=2

    a = a + b;//a=6
    b = a - b;//b=4
    a = a - b;//a=2

    printf("After Swap:\n");
    printf("a=%d\t", a);//a=2
    printf("b=%d\n", b);//b=4

    return 0;
}