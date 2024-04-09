#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Max 1000
int arr[Max];
void bubbleSort(int a[ ],int n)
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
int main() {
    //srand(time(NULL));
    for(int num=0;num<Max;num++){
    arr[num]= rand()%100 + 1; 
    }
    printf("Unsorted array: \n");
    for (int i = 0; i < Max; i++) {
        printf("%d ", arr[i]);
    }
    clock_t start_time = clock();
    bubbleSort(arr, Max);
    clock_t end_time = clock();
    double elapsed_time = (double)(end_time - start_time)/CLOCKS_PER_SEC;
    printf("\nSorted array: \n");
    for (int i = 0; i < Max; i++) {
        printf("%d ", arr[i]);
    }
    printf("Time Required : %d", elapsed_time);
    return 0;
}