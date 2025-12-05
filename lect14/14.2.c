//Find maximmum sum of sub array from given array from a given array whose (Sliding window using INT_MIN)

#include<stdio.h>
#include<limits.h>
int main()
{
    int a[7]={1,5,6,4,7,3,9};
    int k=3; //pair
    int size= sizeof(a)/sizeof(a[0]);
    int window=0,i;
    int maxsum=INT_MIN;
    for(i=0;i<k;i++)
    {
        window=window+a[i];
    }
    for(i=1;i<=size-k;i++)
    {
        window=window-a[i-1]+a[i+k];
        if(maxsum<window)
        {
            maxsum=window;
            //b=i;
        }
    }
    printf("Max Sum from subarray = %d",maxsum);
    
}