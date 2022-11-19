//Nested If....Else....Statement
//Find Greatest amoung 3 data.
#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Enter The values of a,b,c:\n");
    scanf("%d%d%d", &a, &b, &c);//1,5,11

    if(a>b)//True
    {
        if(a>c)//True, False
        {
            printf("a is greater %d\n", a);//print
        }
        else//Fase 
        {
            printf("c is greater %d\n", c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("b is greater %d", b);
        }
        else
        {
            printf("c is greater %d", c);
        }
    }

    return 0;
}

//Find greatest 4 and 5 values