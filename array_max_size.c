//Array is maximum size

#include<stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i,n_input;

    printf("Enter the number of elements do u want to input:\n");
    scanf("%d", &n_input);

    printf("Enter the data %d inputs:", n_input);
    for (i = 0; i < n_input; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Now display %d inputs data:\n", n_input);
    for (i = 0; i < n_input; i++)
    {
        printf("arr[%d]=%d and address =%u\n",i, arr[i],&arr[i]);
    }
    
    return 0;
}