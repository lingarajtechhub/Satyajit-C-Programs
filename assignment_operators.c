// assignment operators => (=)
// for store the data from the RValue assign to the LValue
// c(LValue) = 5(RValue)

#include<stdio.h>

int main()
{
    int a = 2, b = 5;
    a = b;
    b = a;
    printf("a=%d\t", a);//5
    printf("b=%d\n", b);//5
    return 0;
}