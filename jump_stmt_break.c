//Apply Jump Statement Break

#include<stdio.h>

int main()
{
    int i;

    i = 1;
    while (i<=10)//1 2 3
    {
        if(i==5)//1==5(F) 2==5(F) 3==5(F) 4==5(F) 5==5(T)
            break;
        printf("%d\t", i);//1 2 3 4
        i++;//2 3 4 5
    }
    printf("After break this statement is executed.");

    return 0;
} // check even add break; and print odd numbers and viceversa
  // do samething in while and do..while loop.