//Sum of numbers using recursion

#include<stdio.h>

int sum(int n)//5 4 3 2 1 0
{
    if(n==0)//
        return 0;
    else
        return n+sum(n-1);//5+sum(5-1) 5+4+sum(4-1) 5+4+3+sum(3-1) 5+4+3+2+sum(1)
        //5+4+3+2+1+sum(1-1) 5+4+3+2+1+0
}



int main()
{
    int n;

    printf("Enter a numbers:\n");
    scanf("%d", &n);//5

    printf("Sum Of Number:%d\n", sum(n));

    return 0;
}

