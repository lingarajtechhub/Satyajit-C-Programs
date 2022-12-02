//Pointer Increment

#include<stdio.h>

int main()
{
    int a = 90,*p;

    p = &a;

    printf("Value Of p:%u\t", p);

    p++;

    printf("Value Of p:%u\t", p);

    p--;

    printf("Value Of p:%u\t", p);
    
    return 0;
}

// https://www.geeksforgeeks.org/pointer-arithmetics-in-c-with-examples/ 
// Call By Value & Reference