//Increment and Decrement 

#include<stdio.h>

int main()
{
    int a = 2;

    printf("a++=%d\n", a++);//1st assing, then increment
    printf("after post increment a=%d\n", a);

    printf("a--=%d\n", a--); // 1st assing, then decrement
    printf("after post decrement a=%d\n", a);

    printf("++a=%d\n", ++a); // 1st increment, then assign
    printf("after pre increment a=%d\n", a);

    printf("--a=%d\n", --a); // 1st descrement, then assign
    printf("after pre decrement a=%d\n", a);

    return 0;
}

// c = a++ + a++; c = ++a + ++a; c = a-- + a--; c = --a + --a; c = ++a + a++; 