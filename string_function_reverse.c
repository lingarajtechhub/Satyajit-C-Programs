// String Function For Reverse A String

#include <stdio.h>
#include <string.h>

int main()
{
    char ch[30];

    printf("Enter the string:\n");
    gets(ch);

    printf("Display In Reverse:\n");
    printf("%s", strrev(ch));

    return 0;
}