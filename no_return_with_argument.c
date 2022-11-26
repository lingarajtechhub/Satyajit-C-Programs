//No Return With Argument => addition of 2 numbers

#include<stdio.h>

//prototype
void _add_2_numbers(int, int);

void _add_2_numbers(int a,int b)//formal argument
{
    printf("Sum Of 2 Numbers(a+b):%d\n", (a + b));
}

int main()
{
    int a = 45, b = 34;
    _add_2_numbers(a, b);//actual argument
}