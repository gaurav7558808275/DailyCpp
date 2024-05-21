// greatest to lowest

#include <stdio.h>

void SelectionSort(int* arr , int n)
{
    int i,j,temp,min;
    for(i=0;i<n-1;i++)
    {
        min = i;
        for(j=i ; j<n;j++)
        {
            if(*(arr+min) > *(arr + j))
            {
                temp = *(arr+min);
                *(arr+min) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("enter the number of array elements: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    int arr[n];
    int z =n;
    for(int i=0; i<n ; i++)
    {
        scanf("%d", &arr[i]);
    }
    SelectionSort(arr,n);
    printf("The sorted array is: \n");
    for(int i=0; i<n ; i++)
    { 
        printf("%d ",arr[i]);
    }

    return 0;
}