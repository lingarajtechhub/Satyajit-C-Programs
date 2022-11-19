//input two data and display it

#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter a and b values:\n");// \n => creating the new line
    scanf("%d%d", &a, &b);
    printf("a=%d,b=%d", a, b);
    printf("\nAddress of a=%u, \tAddress Of b=%u", &a, &b);
    printf("\nAddress of a=%x, \tAddress Of b=%x", &a, &b);
    printf("\nAddress of a=%o, \tAddress Of b=%o", &a, &b);
    return 0;
}