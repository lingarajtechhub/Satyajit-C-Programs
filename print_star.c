
#include <stdio.h>

int main()
{

    for (int i = 5; i >= 1; i--) //row
    {
        for (int j = i; j >= 1; j--) //col
        {
            printf(" * "); 
        }
        printf("\n");
    }

    for (int i = 1; i <= 5; i++) // row
    {
        for (int j = 1; j<=i; j++) // col
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}
