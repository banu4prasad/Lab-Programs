#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define Max 50
int random_number[Max];
void bubbleSort(int a[],int n);
int binarySearch(int a[ ],int n,int key)
{
    int low=0,mid,high=n-1;
    while(low<=high)
    {
    mid=(low+high)/2; //Find mid element
    if(a[mid]==key)
    return mid;
    if(key<a[mid])
    high=mid-1; //Search in first half
    else
    low=mid+1; //Search in second half
    }
    return -1;
}
int main( )
{
    int n,key,i;
    srand(time(NULL));
    for(int num=0;num<Max;num++){
    random_number[num]= rand()%100 + 1; 
    }
    bubbleSort(random_number,Max);
    printf("Enter the key element \n");
    scanf("%d",&key);
    for(int num=0;num<Max;num++){
        printf(" %d ",random_number[num]);
    }
    i=binarySearch(random_number,Max,key);
    if(i==-1)
    printf("Key element is not found!");
    else
    printf("%d is present at position %d ",key,i+1);
    return 0;
}
void bubbleSort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++) //Number of passes
    for(j=0; j<n-i-1; j++) //For each pass one largest element bubbled to its position
    if(a[j]>a[j+1])
    {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
    }
}