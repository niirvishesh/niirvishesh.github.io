#include <stdio.h>

int main()
{
    unsigned long int a,b,lenb=0,lena=0,n,m,i,arr[10],brr[10],z,y,j,k;
    
    printf("Enter dividend : \n");
    scanf("%lu",&a);
    
    printf("Enter divisor : \n");
    scanf("%lu",&b);
    y=b;
    
            // Finding length of b:
    while(y!=1)
    {
        y/=10;  lenb++;                 
    }
            //printf("%lu\n",lenb);        //n=lenb=3
    n=lenb;
    
            // Appending 'n'  zeroes at the last of a:                              
    while(n>0)
    {
        a*=10;  n--;                    
    }
    z=a;        
            //printf("%lu\n",a);  //z=a=1101000
                                
    
    //Finding length of a:
    while(z!=0)
    {
        z/=10;  lena++;                 
    }
    m=lena;
            //printf("%lu\n",m);     //m=lena=7;
    
     
            // Variable 'a' to array 'arr' storage:                               
    for(i=0;i<m;i++)
    {
        arr[m-i]=a%10;
        a/=10;
    }
    
            // Variable 'b' to array 'brr' storage:
    for(i=0;i<=lenb;i++)
    {
        brr[lenb-i]=b%10;
        b/=10;
    }
    
            //  CRC Remainder calculator:                   
    for(i=1;i<m;i++)
    {
        j=0;
        if(arr[i]==0)
        {
            for(k=0;k<lenb;k++)
            {
                brr[k]=0;
            }
        }
        arr[i] = arr[i] ^ brr[j];
        arr[i+1] = arr[i+1] ^ brr[j+1];
        arr[i+2] = arr[i+2] ^ brr[j+2];
        arr[i+3] = arr[i+3] ^ brr[j+3];
        
        if(i+lenb == m)
        {
            printf("Remainder : ");
            printf("%ld %ld %ld",arr[i+1],arr[i+2],arr[i+3]);
            break;
        }
    }
}