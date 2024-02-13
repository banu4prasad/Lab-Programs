#include<stdio.h>
#include<stdlib.h>
int main()
{
    int temp,small,i,n,a[100];
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        small = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[small])
            {
                small = j;
            }
    temp = a[small];
    a[small] = a[i];
    a[i] = temp;
        }
    }
    printf("The sorted array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }

}