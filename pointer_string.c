// Pointer & String

#include <stdio.h>

int main()
{
    char ch[] = {'1', '2', '3', '4', '5'};

    char *p;

    p = ch; // p holds the base address of ch or p = &ch[0];

    for (int i = 0; i < 5; i++)
    {
        printf("%4c", *p);
        p++;
    }

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%4c", *(ch + i));
    }

    return 0;
}