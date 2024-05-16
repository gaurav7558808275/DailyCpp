#include "stdio.h"
//5 1 4 2 3
//  1 2 3 4
//0 1 2 3 4 

void insertionsort(int * arr , int n)
{
 //smaller to larger
    int i=0,j=0,comp; 
    for(i=1;i<n;i++)
    {
        comp = arr[i];
        j = i-1;
        while( j>=0 && (arr[j] < comp) )
        {  
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = comp;
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
    insertionsort(arr,n);
    
    for(int i=0; i<n ; i++)
    { 
        printf("%d ",arr[i]);
    }

    return 0;
}