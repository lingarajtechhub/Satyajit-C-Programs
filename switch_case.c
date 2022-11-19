// Switch Case
// To check the entered no. is even or not.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the value of n:\n");
    scanf("%d", &n);//4, 5

    switch (n % 2) // 0, 1
    {
    case 0:
        printf("%d is even number", n);
        break;
    case 1:
        printf("%d is odd number", n);
        break;
    default:
        printf("%d is neither even nor odd.", n);
    }

    return 0;
}