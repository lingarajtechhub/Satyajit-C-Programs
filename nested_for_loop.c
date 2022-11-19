//nested for loop proprint the matrix
/*
  11   12

  21   22  [2x2]

*/
#include<stdio.h>

int main()
{
    int count = 0;

    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            printf("%d\t", count++);//0  1 2 3
        }
        printf("\n");
    }
    

    return 0;
}

//[2x3] [2x4] [3x2] [3x3] [3x4]