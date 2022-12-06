//With Return No Argument Function => addition of 2 numbers

#include<stdio.h>

//prototype
float _add_2_numbers();

float _add_2_numbers()
{
    float x = 23, y = 56;
    return (x + y);
}


int main()
{
    //int sum = _add_2_numbers();
    printf("Sum Of 2 numbers:%f ", _add_2_numbers());
    return 0;
}