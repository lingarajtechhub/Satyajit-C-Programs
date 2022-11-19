//Apply goto jump statement

#include<stdio.h>

int main()
{
    int n = 10;
    
    if(n%2==0)
        goto even;
    else
        goto odd;

    even:
        printf("%d is a even number.", n);
        return 0;
    odd:
        printf("%d is a odd number.", n);
    
    //return 0;
}//when if i==5 then jump goto stmt apply using while loop here.