// Area Of Circle using #define

#include <stdio.h>

int main()
{
    int r;
    double area_circle;
    printf("Enter the radius:\n");
    scanf("%d", &r);
    area_circle = 22/(float)7*r*r; //Explicit Type Casting
    printf("Area OF Circle=%.2lf", area_circle);
    return 0;
}