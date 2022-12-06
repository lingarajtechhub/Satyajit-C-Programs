// Auto Storage Class
// Storage => stack memory
// Initial Value => Grabage
// Scope => Start of Program
// Life => End of Program

#include <stdio.h>

void auto_storage()
{
    auto int x = 0;//x=0, x=0
    x++;//x=1, x=1
    printf("x=%d\n", x);//x=1, x=1
}

int main()
{
    auto_storage();
    auto_storage();
    auto_storage();

    return 0;
}
