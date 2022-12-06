// Pointer & String

#include <stdio.h>

int main()
{
    // char *str[2] = {"qwerty","keyword"} input & print this 
    char str[][7] = { // input and print
        "qwerty",
        "keyword"};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf("%c", str[i][j]);
        }
    }

    // now print the above string array in pointer
    printf("\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf("%c", *(*(str + i) + j));
        }
    }

    return 0;
}

// count number of chracters in a given string array
// char str[5][20]; input and display with pointer