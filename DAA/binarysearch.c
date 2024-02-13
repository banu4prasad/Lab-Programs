#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,a[50],mid,key,low,high;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched\n");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            printf("Element found at position %d\n",mid+1);
            exit(0);
        }
        else if(a[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    printf("Element not found\n");
    return 0;
}