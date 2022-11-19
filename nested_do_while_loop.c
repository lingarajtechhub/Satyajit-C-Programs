//nested do...while..loop

#include<stdio.h>

int main()
{
    int count = 1;

    int i, j;

    i = 1;
    do
    {
        j = 1;
        do
        {
            printf("%d\t", count++);//1 2 3 4
            j++;
        } while (j<=2);
        i++;
        printf("\n");

    } while (i<=2);
    

    return 0;
}