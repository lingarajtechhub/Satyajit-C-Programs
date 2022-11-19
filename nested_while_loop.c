//Nested while loop for print 1-4

#include<stdio.h>

int main()
{
    int count = 1,i,j;

    i = 1;
    while (i<=2)
    {
        j = 1;
        while (j<=2)
        {
            printf("%d\t", count++);//1 2 3 4
            j++;
        }
        i++;
        printf("\n");
    }
    

    return 0;
}