//conditional operators(? :)
/*

    3 parts
    =========
    1. condition
    2. true-statement
    3. false-statement

    syntax - (condition) ? true-statement : false-statement;

*/

#include<stdio.h>

int main()
{
    int n;

    printf("Enter the number:\n");
    scanf("%d", &n);

    (n % 2 == 0) ? printf("Even Number:%d", n) : printf("Odd Number=%d", n);
    //True => 1 : 0

    return 0;
}