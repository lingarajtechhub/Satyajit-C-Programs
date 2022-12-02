//Two pointer substractions

#include<stdio.h>

int main()
{
    int x = 2,n=3,y;

    int *p1=&x, *p2=&n; //p1 = 1000 & p2 = 2000 

    printf("Before Substraction Between 2 Pointers Their values are:%u & %u:\t",p1,p2);

    y = p1 - p2; // the size of int is 4 bytes, therefore the increment between p1 and p2 is given by (4/4) = 1.

    printf("\nValue of y=%d", y); 

    return 0;
}