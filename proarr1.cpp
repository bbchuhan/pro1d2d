#include <stdio.h>

int main()
{
    int arr[100]; 
    int i, n;

    
     
    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("\nEnter %d elements in array :: \n ",n);
    for(i=0; i<n; i++)
    {
        printf("\nEnter %d element in array :: ",i+1);
        scanf("%d", &arr[i]);
    }

    
     
     
    printf("\nAll negative elements in array are :: ");
    for(i=0; i<n; i++)
    {
        if(arr[i]<0)
        {
            printf(" %d ", arr[i]);
        }
    }

    return 0;
}
