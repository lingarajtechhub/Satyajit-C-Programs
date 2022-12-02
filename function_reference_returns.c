//How return reference from the function

#include<stdio.h>

int *max(int *p, int *q) //*p = &x & *q=&y;
{
    if(*p>*q)
        return p;
    else
        return q;
}

int main()
{
    int x, y;

    int *m;

    printf("Enter the values of x and y:\n");
    scanf("%d%d", &x, &y);

    m = max(&x, &y);//return reference from the max function

    printf("Maximum Number:%5d", *m);

    return 0;
}