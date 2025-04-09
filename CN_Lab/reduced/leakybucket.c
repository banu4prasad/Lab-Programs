#include<stdio.h>

typedef struct {
    int time, size;
} packet;

int main() {
    packet p[50];
    int n, bsize, outrate, i, k = 0, bfilled = 0;
    
    printf("Enter number of packets: ");
    scanf("%d", &n);
    
    printf("Enter arrival time and size for each packet:\n");
    for(i = 0; i < n; i++)
        scanf("%d %d", &p[i].time, &p[i].size);
    
    printf("Enter bucket size: ");
    scanf("%d", &bsize);
    
    printf("Enter output rate: ");
    scanf("%d", &outrate);
    
    for(i = 1; i <= p[n-1].time || bfilled; i++) {
        printf("\nTime %d:", i);
        
        if(k < n && p[k].time == i) {
            if(bfilled + p[k].size <= bsize) {
                bfilled += p[k].size;
                printf(" Added: %d bytes", p[k].size);
            } else {
                printf(" Discarded: %d bytes", p[k].size);
            }
            k++;
        }
        
        int sent = (bfilled >= outrate) ? outrate : bfilled;
        if(sent > 0) {
            bfilled -= sent;
            printf(" Sent: %d bytes", sent);
        }
        
        printf(" Bucket: %d bytes", bfilled);
    }
    
    return 0;
}