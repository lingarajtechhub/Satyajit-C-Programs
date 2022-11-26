//String Function Copy

#include<stdio.h>
#include<string.h>

int main()
{
    char ch[30],ch2[30];

    printf("Enter the 1st string(ch):\n");
    gets(ch);

    strcpy(ch2, ch);

    printf("After copy the 2nd string (ch2):\n");
    printf("%s", ch2);

    return 0;
}