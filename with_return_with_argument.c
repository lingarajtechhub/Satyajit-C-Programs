//With Return With Argument => Addition Of 2 Numbers

#include<stdio.h>

//prototype
int _add_2_numbers(int, int);

int _add_2_numbers(int x,int y)
{
    /*
        int sum;
        sum = x+y;
    */
    return (x + y); // return sum;
}

int main()
{
    printf("Sum Of 2 numbers:%d ", _add_2_numbers(23, 45));//passing parameters inside function call
    return 0;
}

//area of circle,triangle, rectangle,square using function
//perimeter of circle,triangle, rectangle,square using function
// i = i+2 => i+=2 => i*=2 => i-=2 short hand operators