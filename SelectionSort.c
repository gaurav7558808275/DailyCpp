#include <stdio.h>



int main()
{

    int n; 
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    int arr[n];
    for(int i=0; i<=n ; i++)
    {
        scanf("%d", *(arr + i));
    }


}