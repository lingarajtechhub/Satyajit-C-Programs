//Area Of Circle

#include<stdio.h>

int main()
{
    int r;
    float area_circle;
    printf("Enter the radius:\n");
    scanf("%d", &r);
    area_circle = 3.14 * r * r;
    printf("Area OF Circle=%f", area_circle);
    return 0;
}