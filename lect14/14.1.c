//Find maximmum sum of sub array from given array from a given array whose (Code dependent)

#include<stdio.h>
int main()
{
    int a[6]={1,3,-4,7,0,-9};
    int k=3,max=0,b,i;
    for(i=0;i<=6-2;i++)
    {
        if(max<a[i]+a[i+1]+a[i+2])
        {
            max=a[i]+a[i+1]+a[i+2];
            b=i;
        }
    }
    int sum=0;
    for(i=b;i<b+3;i++)
    {
        printf("\nIndex : %d Element : %d",i,a[i]);
        sum=sum+a[i];
    }
    printf("\nThe sum of all elements : %d",sum);

}

//Code independent
#include<stdio.h>
int main()
{
   int a[6]={1,3,-4,7,0,-9};
   int sum,k=3,max=0,b,i;
   int size=sizeof(a)/sizeof(a[0]);
   for(i=0;i<=size-k;i++)
    {
        int sum=0;
        for(int j=i;j<i+k;j++)
        {
            sum=sum+a[j];
        }
        if(sum>max)
        {
            max=sum;
        }
    }
    printf("MaxSum : %d",max);

}

//Sliding window
#include<stdio.h>
int main()
{
    int a[6]={1,3,-4,7,0,-9};
    //int a[6]={-1,-3,-4,-7,-9,-9};
    int winsum=0,maxsum,k=3;
    int size=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<k;i++)
    {
        winsum=winsum+a[i];
       
    }
    maxsum=winsum;
    for(int i=1;i<size-k;i++)
    {
        winsum=winsum-a[i-1]+a[i+k-1];
        if(winsum>maxsum)
        {
            maxsum=winsum;
        }

    }
    printf("Maxsum : %d",maxsum);

}
