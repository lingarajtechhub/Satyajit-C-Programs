//String Function Upper Case

#include<stdio.h>

#include<string.h>

int main()
{
    char ch[30];

    printf("Enter the string:\n");
    gets(ch);

    printf("Display In Upper Case:\n");
    printf("%s", strupr(ch));

    return 0;
}