// Static Storage Class
// Memory => Data Segment
// Inital Value => 0
// Scope => Within block
// Life => Till End Of Program

#include <stdio.h>

void static_storage()
{
    static int x = 0;//x=0,x=1,x=2
    x++;//x=1,x=2,x=3
    printf("x=%d\n", x);//x=1,x=2,x=3
}//block end

int main()
{
    static_storage();
    static_storage();
    static_storage();

    return 0;
}