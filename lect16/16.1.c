//sorted array 

#include<stdio.h>
int main(){
    int arr[5]={1,4,5,65,3};
    int n=sizeof(arr)/sizeof(int);
    int i,j,temp;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<5-i; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("sorted array:");
    for(int i=0; i<5; i++){
        printf("%d",arr[j+1]);
    }
    return 0;
}

//bubble sort: sorting in descending order

#include<stdio.h>
int main(){
    int a[5];
    for(int i=0; i<5; i++)
    {
        printf("enter input no.%d:",i+1);
        scanf("%d",a[i]);
    }
    for(int i=0; i<5; i++)
    {
        int count=0;
        for(int j=0; j<4; j++)
        {
            if(a[j]<a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                count++;
            }
        }
        if(count==0)
        {
            break;
        }
        for(int j=0; j<5; j++)
        {
            printf("%d\t",a[j]);
        }
        printf("\n");
    }
    printf("\nDesecending order:\n\n");
    for(int i=0; i<5; i++)
    {
        printf("%d\t",a[i]);
    }
}

//Binary Search : 

#include<stdio.h>
int main()
{
    int a[5]={1,2,5,9,11};
    int n;
    int size=sizeof(a)/sizeof(a[0]);
    int l=0,h=size-1;
    int mid;
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
            
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("Enter a number : ");
    scanf("%d",&n);
    for(;l<=h;)
    {
        mid=(l+h)/2;
        if(a[mid]==n)
        {
            break;
        }
        else
        {
            if(n>mid)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
         
        }
    }
    if(h<l)
    {
        printf("Element Not Found");
    }
    else
    {
        printf("Element Found");
    }
}