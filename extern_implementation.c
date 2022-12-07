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
    double g = 56.348943;

    printf("Enter the value of (int)x,(float)y,(long long int)z:\n");
    scanf("%d %f %ld", &x, &y, &z);

    printf("x=%d,y=%f,z=%ld,g=%lf\n", x, y, z, g);

    CircleAreaUsingVoid(2);
    printf("Area Of Circle Is: %f", CircleAreaUsingFloat(4));

    return 0;
}
//print the all negative numbers in an array
//sum of elements in an array
//find the even  numbers and odd numbers in an array
//find the largest number in an array
//find the smallest number in an array
//find the prime numbers in an array
//count the negative numbers in an array
//print unique elements in an array
//merge 2 arrays into third array
//reverse of an array
//sort even and odd elements in an array