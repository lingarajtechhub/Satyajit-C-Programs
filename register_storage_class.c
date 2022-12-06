
#include <stdio.h>

int register_storage()
{
    register int x = 0; // x=0,x=1,x=2
    x++;                // x=1,x=2,x=3
    return x;           // x=1,x=2,x=3
} // block end

int main()
{
    printf("x=%d\n", register_storage());
    printf("x=%d\n", register_storage());
    printf("x=%d\n", register_storage());

    return 0;
}