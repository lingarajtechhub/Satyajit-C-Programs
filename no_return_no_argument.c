//No Return No Argument Function => Addition of 2 numbers

#include<stdio.h>

//prototype
//void add_2_numbers();
void _sub_2_numbers();

void add_2_numbers() // called function
{
    int a, b;
    a = 34;
    b = 45;
    printf("Sum Of 2 Numbers(a+b):%d\n", (a + b));
    _sub_2_numbers(); // calling
}

void _sub_2_numbers() // called
{
    int a, b;
    a = 34;
    b = 45;
    printf("Sum Of 2 Numbers(a-b):%d\n", (a - b));
}

int main()
{
    add_2_numbers();//calling function

    return 0;
}

