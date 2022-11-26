//Matrix Transpose

#include <stdio.h>
int main()
{
    int mat[2][3];

    printf("Enter the elements inside matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }   
    }

    printf("Before Transpose The Elements Are:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%3d", mat[i][j]);
        }
        printf("\n");
    }

    printf("Matrix Transpose:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%3d", mat[j][i]);//%wd => w means width
        }
        printf("\n");
    }
    

    return 0;
}
