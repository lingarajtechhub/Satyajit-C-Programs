//Logical Operators

#include<stdio.h>

int main()
{
    int a = 4, b = 2, c = 5;
    printf("%d\n", (a > b) && (a > c));//0=>False
    printf("%d\n", (a > b) || (a > c));//1=>True
    printf("%d\n", !(a > b) || !(a > c));//1=>True
    return 0;
}