// String Function For Concatenate


#include <stdio.h>
#include <string.h>

int main()
{
    char ch[30],ch2[30];

    printf("Enter the 1st string:\n");
    gets(ch);

    printf("Enter the 2nd string:\n");
    gets(ch2);

    strcat(ch2, ch);

    printf("Display In Concatenate(ch2):\n");
    printf("%s", ch2);

    return 0;
}