//String gets() and puts()

#include<stdio.h>

int main()
{
    char str[30];

    printf("Enter the string:\n");
    gets(str);

    printf("Display the string:\n");
    puts(str);
    printf("%s", str);
    return 0;
}