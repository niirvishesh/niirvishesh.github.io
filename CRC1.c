#include <stdio.h>

int main()
{
    int arr[20],brr[20],a,b,i,j,k;

    printf("Enter no. of bits for dividend : \n");
    scanf("%d",&a);
    printf("Enter dividend : \n");
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter no. of bits for divisor : \n");
    scanf("%d",&b);
    printf("Enter dividend : \n");
    for(i=0;i<b;i++)
    {
        scanf("%d",&brr[i]);
    }

    // Appending 'b-1' zeroes to arr:
    for(i=1;i<b-1;i++)
    {
        arr[a+i]=0;
    }

    
    // CRC Remainder
    for(i=0;i<a+b-2;i++)
    {
        j=0;
        if(arr[i]==0)
        {
            for(k=0;k<b;k++)
            {
                brr[k]=0;
            }
        }
        arr[i] = arr[i] ^ brr[j];
        arr[i+1] = arr[i+1] ^ brr[j+1];
        arr[i+2] = arr[i+2] ^ brr[j+2];
        arr[i+3] = arr[i+3] ^ brr[j+3];
        if(i+(b-1) == a+b-2)
        {
            printf("Remainder : ");
            printf("%d %d %d",arr[i+1],arr[i+2],arr[i+3]);
            break;
        }
    }
}
