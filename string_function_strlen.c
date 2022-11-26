//String Length Function

#include<stdio.h>
#include<string.h>

int main()
{
    char str[30];
    int length;

    printf("Enter the string:\n");
    gets(str);

    length = strlen(str);//count the number of characters from a entered string

    printf("The length of string is:%d", length);

    return 0;
}