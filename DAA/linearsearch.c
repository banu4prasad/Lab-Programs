#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,a[100],key;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    //scanf("%d",&a);
    //printf("Enter the element to be searched: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the element to be searched: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("Element found at position %d\n",i+1);
            exit(0);
        }
    }
    printf("Element not found\n");
    return 0;
    

}