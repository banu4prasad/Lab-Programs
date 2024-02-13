#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,n,temp1,temp2,gcd;
    printf("Enter two numbers: ");
    scanf("%d %d",&m,&n);
    temp1=m;
    temp2=n;
    if(temp2==0)
    {
        printf("GCD of %d and %d is %d",m,n,temp1);
        exit(0);
    }
    while(temp2!=0)
    {
        int rem = temp1%temp2;
        temp1=temp2;
        temp2=rem;
    }
    gcd=temp1;
    printf("GCD of %d and %d is %d \n",m,n,gcd);
    return 0;
}