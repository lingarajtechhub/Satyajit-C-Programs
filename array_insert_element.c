//Array Insert Ana Element(30)
//Use Max Size
#include<stdio.h>

int main()
{
    int arr[10], i, pos,val,n;

    printf("Enter the number of elements in array:\n");
    scanf("%d", &n);

    printf("Enter %d elements inside an array:\n",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position and element to insert inside an array:\n");
    scanf("%d%d", &pos, &val);

    printf("Before insert an element the array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    for (i = n; i >= pos; i--) // i=5, 5>=3;  i=4,4>=3; i=3, 3>=3; i=2, 2>=3
    {
        arr[i] = arr[i - 1]; // arr[5] = arr[4]; arr[4] = arr[3]; arr[3] = a[2];
    }

    arr[pos - 1] = val;//arr[2]=14

    printf("after insert the elements are:\n");
    for (i = 0; i <= n; i++)
    {
        printf("arr[%d]=%d\n",i, arr[i]);
    }

    return 0;
}