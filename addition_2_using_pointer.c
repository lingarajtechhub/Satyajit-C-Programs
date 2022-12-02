//Addition Of 2 Numbers Using Pointer

#include<stdio.h>

int main()
{
    int a = 3, b = 4, *p, *q;
    p = &a;
    q = &b;
    int sum = *p + *q;
    printf("Addition OF 2 Numbers: %d\t", sum);
    return 0;
}