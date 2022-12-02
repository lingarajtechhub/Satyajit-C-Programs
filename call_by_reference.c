// Call by Reference

#include <stdio.h>

void swap(int *p, int *q)//received by pointer
{
    int *temp;
    temp = p;
    printf("\np=%u", p);
    p = q;
    printf("\np=%u", p);
    q = temp;
    printf("\nq=%u", q);
    printf("\nIn Swap Addresses Of :&p=%u,  &q=%u\t", &p, &q);
    printf("\nIn Swap Value Of :p=%u,  q=%u\t", p, q);
    printf("\nIn Swap Values Of :*p=%5d,  *q=%5d\t", *p, *q);
}

int main()
{
    int x, y;

    printf("Enter the values of x and y:\n");
    scanf("%d%d", &x, &y);

    printf("\nBefore Swap Addresses Of :x=%u,  y=%u\t", &x, &y);
    printf("\nBefore Swap Values Of :x=%5d,  y=%5d\t", x, y);

    swap(&x, &y); // actual argument with passing addresses

    printf("\nAfter Swap Addresses Of :x=%u,  y=%u\t", &x, &y);
    printf("\nAfter Swap Values Of :x=%5d,  y=%5d\t", x, y);

    return 0;
}