// String Function lower Case

#include <stdio.h>
#include <string.h>

int main()
{
    char ch[30];

    printf("Enter the string In Upper Case:\n");
    gets(ch);

    printf("Display In Lower Case:\n");
    printf("%s", strlwr(ch));

    return 0;
}