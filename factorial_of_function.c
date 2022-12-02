//Find Factorial of a number using recurssion

#include<stdio.h>

int factorial(int n)//5 4 3 2 1 0
{
    if(n==0)
        return 1;
    else
        return n * factorial(n - 1);//5*factorial(5-1)
                                    //5*4*factorial(4-1)
                                    //5*4*3*factorial(3-1)
                                    //5*4*3*2*factorial(2-1)
                                    //5+4+3+2+1+sum(1-1)
}


int main()
{
    int n;

    printf("Enter the value of n:\n");
    scanf("%d",&n);//5

    printf("Factorial Of Number:%d\n", factorial(n)); // 5
}

//find GCD using recursion
