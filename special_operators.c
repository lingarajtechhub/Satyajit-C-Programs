//special operators => sizeof(), (comma ,)

#include<stdio.h>
int main()
{
    int a;
    long long int b;
    float c;
    double d;
    long double e;
    char f;
    char ch[5];

    int o;

    o = (a=2, b=3,a*b);

    a = b = c = 3;

    printf("Size of int:%d\n", sizeof(a));//sizeof() -> operator to return sizes(the amount of memory allocation) of specific variables
    printf("Size of long long int:%d\n", sizeof(b));
    printf("Size of float:%d\n", sizeof(c));
    printf("Size of double:%d\n", sizeof(d));
    printf("Size of long double:%d\n", sizeof(e));
    printf("Size of char:%d\n", sizeof(f));
    printf("Size of char in string:%d\n", sizeof(ch));


    printf("o=%d\n", o);
    return 0;
}