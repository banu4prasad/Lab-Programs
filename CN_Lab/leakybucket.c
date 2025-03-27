#include<stdio.h>

struct packet
{
    int time;
    int size;
}p[50];

int main()
{
int i,n,m,k=0;
int bsize,bfilled,outrate;
    printf("Enter the number of packets: ");
    scanf("%d",&n);
    printf("Enter packets in the order of their arrival time\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the time and size: ");
        scanf("%d%d",&p[i].time,&p[i].size);
    }
    printf("Enter the bucket size: ");
    scanf("%d",&bsize);
    printf("Enter the output rate: ");
    scanf("%d",&outrate);
    m=p[n-1].time; // stopping condiction
    i=1; //Simulation Time tarcking
    k=0; // Current packet being processed
    bfilled=0; // Initial buffer filled
    while(i<=m || bfilled!=0) //until the last packet arrives and all data is transmitted.
    {
    printf("\n\n At time %d",i);
    if(p[k].time==i ) //Insert Packet into Bucket
    {
    if(bsize>=bfilled + p[k].size) //If space is available, add it to the bucket
    {
    bfilled=bfilled + p[k].size;
    printf("\n %d byte packet is inserted",p[k].size); 
    k=k+1;
    }
    else  // If bucket overflows, discard the packet
    {
        printf("\n%d byte packet is discarded",p[k].size);
        k=k+1;
    }
    }
    if(bfilled==0) //If bucket is empty
    {
    printf("\nNo packets to transmitte");   
    }
    else if(bfilled>=outrate) //
    { //If bucket has more than the output rate, transmit outrate bytes.
    bfilled=bfilled-outrate;
    printf("\n%d bytes transfered",outrate);
    }
    else //If bucket has less than the output rate, transmit whatever is left.
    {
    printf("\n%d bytes transfered",bfilled);
    bfilled=0;
    }
    printf("\nPackets in the bucket %d byte",bfilled); //Display Remaining Bucket Size
        i++;
    }
    return 0;
}