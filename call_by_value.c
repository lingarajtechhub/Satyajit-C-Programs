//Call by Value 

#include<stdio.h>

void swap(int p,int q)
{
    int temp;
    temp = p;
    p = q;
    q = temp;
}

int main()
{
    int x, y;

    printf("Enter the values of x and y:\n");
    scanf("%d%d", &x, &y);

    printf("\nBefore Swap:x=%5d,  y=%5d\t", x, y);

    swap(x, y);//actual argument

    printf("\nAfter Swap:x=%5d,  y=%5d\t", x, y);

    return 0;
}