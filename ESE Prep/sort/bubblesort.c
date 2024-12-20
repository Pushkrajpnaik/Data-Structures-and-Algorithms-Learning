#include <stdio.h>
#include <stdbool.h>

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int* arr, int n)
{
    bool flag = true;
    for(int i= 0; i < n-1; i++)
    {
        for(int j= 0; j < n-i-1; j++)
    {
        if(arr[j] > arr[j+1])
        {
            swap(&arr[j], &arr[j+1]);
            flag = false;
        }
    }

    if(flag == true)
    {
        return;
    }
    }
}

int main()
{
    int arr[] = {5,4,3,2,1};
    int* x= arr;
    printf("Before sorting: ");
    for(int i=0; i< 5; i++)
    {
        printf("%d ", arr[i]);
    }

    bubble_sort(x,5);
    printf("\nAfter sorting: ");
    for(int i=0; i< 5; i++)
    {
        printf("%d ", arr[i]);
    }
}