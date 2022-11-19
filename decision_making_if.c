//Decision Making Statement

#include<stdio.h>

int main()
{
    int age;

    printf("Enter the age:\n");
    scanf("%d", &age);

    if(age>=18)
    {
        printf("Eligible For Voting.");
    }
    else
    {
        printf("Not Eligible For Voting.");
    }

    return 0;
}