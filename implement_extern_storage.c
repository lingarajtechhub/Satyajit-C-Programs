#include <stdio.h>
//#include "extern_storage_class.h"
int x = 90;
int main()
{
    extern int x;
    printf("x=%d", x);

    return 0;
}