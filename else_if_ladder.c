//Else If Ladder

#include<stdio.h>

int main()
{
    int phy, che, math, sci, bio, total, avg;

    printf("Enter The Values In phy, che, math, sci, bio:\n");
    scanf("%d%d%d%d%d", &phy, &che, &math, &sci, &bio);

    total = phy + che + math + sci + bio;
    printf("Total=%d\n", total);

    avg = total / 5;

    if(avg>=60)
        printf("Grade-A");
    else if(avg>=50)
        printf("Grade-B");
    else if(avg>=40)
        printf("Grade-C");
    else if(avg>=30)
        printf("Grade-D");
    else//false
        printf("Fail");

    return 0;
}

//Find the greatest amoung 3 using else if
//Find the leap year else if
