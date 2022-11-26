//String Function Compare Between 2 Strings

// str1==str2 => equal
// str1>str2 => str1 is greater
// str1<str2 => str2 is greatre or str1 is smaller

#include<stdio.h>
#include<string.h>

int main()
{
    char ch1[30], ch2[30];

    printf("Enter the 1st String (ch1):\n");
    gets(ch1);

    printf("Enter the 2nd String (ch2): \n");
    gets(ch2);

    if(strcmp(ch1,ch2)==0)
        printf("Both Strings Are equal.");
    else if(strcmp(ch1,ch2)>0)
        printf("ch1 is greater than ch2.");
    else
        printf("ch2 is greater than ch1 or ch1 is smaller.");

    return 0;
}