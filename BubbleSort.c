#include "stdio.h"
#include "stdbool.h"

void BubbleSort(int* arr, int n)
{
    int i,j,temp;
    bool swap;
    for(i = 0; i < n-1 ; i++ )  
    {
        swap = false;
        for(j = 0 ; j< n - i - 1 ; j++)
        {
            if(arr[j] < arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                swap = true;

            }

        }
        if(swap == false)
        {
            
            break;
        }

    }
}


int main()
{
    int n; 
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    int arr[n];
    int z =n;
    for(int i=0; i<n ; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    BubbleSort(arr,n);
    
    for(int i=0; i<n ; i++)
    { 
        printf("%d ",arr[i]);
    }
}