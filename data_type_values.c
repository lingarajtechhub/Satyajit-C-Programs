//Data type and values

#include<stdio.h>

int main()
{
    int a = 8758764;
    long long int b = 8765483257L;
    float c = 00000.56f;
    double d = 65.983498948;
    char e = 'A';
    char f[] = "qwerty";// '\0' => null terminate the string
    printf("a=%d\t", a);
    printf("\nb=%lld", b);
    printf("\nc=%3.2e", c);//%wf
    printf("\nd=%lf", d);
    printf("\ne=%c", e);
    printf("\nf=%s", f);
    return 0;
}//number system