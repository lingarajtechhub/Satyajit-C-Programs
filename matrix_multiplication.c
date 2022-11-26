//Matrix multiplication

#include<stdio.h>

int main()
{
    int A[2][3], B[3][2], C[2][2];

    printf("Enter [2x3] the matrix A:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
        
    }

    printf("Enter [3x2] the matrix B:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &B[i][j]);
        }

    }

    printf("Display the matrix A:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%3d", A[i][j]);
        }
        printf("\n");
    }

    printf("Display the matrix B:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%3d", B[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                C[i][j] = C[i][j] + (A[i][k] * B[k][j]);
            }
            
        }
        
    }

    printf("After MAtrix Multiplication The Result Matric C is:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%3d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}