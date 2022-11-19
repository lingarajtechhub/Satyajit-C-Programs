//apply continue jump statement

#include<stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        if(i==5)//1==5(F) 2==5(F) 3==5(F) 4==5(F) 5==5(T)
            continue;
        printf("%d\t", i);//1 2 3 4 6 7 8 9 10
    }
    
    return 0;
}
// check even add continue; and print odd numbers and viceversa
// do samething in while and do..while loop.