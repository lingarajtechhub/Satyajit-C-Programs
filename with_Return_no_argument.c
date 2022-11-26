//With Return No Argument Function => addition of 2 numbers

#include<stdio.h>

//prototype
int _add_2_numbers();

int _add_2_numbers()
{
    int x = 23, y = 56;
    return (x + y);
}


int main()
{
    //int sum = _add_2_numbers();
    printf("Sum Of 2 numbers:%d ", _add_2_numbers());
    return 0;
}