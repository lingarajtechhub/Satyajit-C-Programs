//delete an element inside an array

//input/output declaration header file(printf() and scanf())
#include<stdio.h>

//defining the maximum size of an array
#define MAX_SIZE 10

int main()
{
    //variable declaration with array(arr), position(pos) and number of inputs(n)
    int arr[MAX_SIZE], n, pos;

    //enter the number of elements needed in array
    printf("Enter the size of an array:\n");
    scanf("%d", &n);//5 //read the number of inputs

    //enter the values inside the array by number of inputs.
    printf("Enter the %d elements in an array:\n", n);
    for (int i = 0; i < n; i++)//0 1 2 3 4 
    {
        scanf("%d", &arr[i]);//10 23 56 34 67
    }

    //Enter the position of an element to be delete
    printf("Enter the position of an array element to delete:\n");
    scanf("%d", &pos);//3

    //display array before delete
    printf("Before Delete an Element the array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);//10 23 56 34 67 
    }

    //to delete an element logic
    for (int i = pos - 1; i < n - 1; i++) // i=2 2<4; i=3 3<4; i=4 4<4 (False)
    {
        arr[i] = arr[i + 1]; //arr[2]=arr[3]  arr[3] = arr[4]
    }

    n--;//n=5 => n=4 //after delete decrease the number of inputs

    //display array after position element delete
    printf("Atfter delete an element the array is:\n");
    for (int i = 0; i < n; i++)//0 1 2 3
    {
        printf("a[%d]=%d\n", i, arr[i]);//10 23 34 67
    }
    
    return 0;
}