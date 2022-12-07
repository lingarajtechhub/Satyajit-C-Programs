// Extern Implementation

#include <stdio.h>
#include "extern_declaration.h" //varaiables and function defination

void CircleAreaUsingVoid(int);
float CircleAreaUsingFloat(int);

void CircleAreaUsingVoid(int x)
{
    printf("Area OF Circle is:%f\n", (3.14 * x * x));
}

float CircleAreaUsingFloat(int x)
{
    return (3.14 * x * x);
}

int main()
{
    int x;
    float y;
    long long int z;
    double g;

    printf("Enter the value of (int)x,(float)y,(long long int)z,(double)g:\n");
    scanf("%d%f%ld%g", &x, &y, &z, &g);

    printf("x=%d,y=%f,z=%ld,g=%g\n", x, y, z, g);

    CircleAreaUsingVoid(2);
    printf("Area Of Circle Is: %f", CircleAreaUsingFloat(4));

    return 0;
}