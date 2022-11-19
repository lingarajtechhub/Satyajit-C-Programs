//For Loop To Print 1-100

#include<stdio.h>

int main()
{
    int count = 0;

    for (int i = 2; i <= 100; i+=2)//short hand operator i=i+2  a&=2 => a=a&2
    {
        printf("%d\t", i);
        count++;
    }

    printf("\nNumber of Even Numbers Are:%d", count);

    return 0;
}//print even and odd in a one loop.
//print even and odd in reverse loop.