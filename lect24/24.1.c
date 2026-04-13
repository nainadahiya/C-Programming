// First non repeating character

#include<stdio.h>
#include<string.h>
int main()
{
    char s[]="abcaafgh";
    int ln = strlen(s);
    int count=0;
    char freq[256]={0};
    for(int i=0;i<ln;i++)
    {
        freq[s[i]]++;
    }
    for(int i=0;i<ln;i++)
    {
        if(freq[s[i]]==1)
        {
            printf("%c is non repeating",s[i]);
            count++;
            break;
        }
        
    }
    if(count==0)
    {
        printf("No non repeating character exist");
    }
}


//Move all negative no to left positive to right

#include<stdio.h>
int main()
{
    int arr[]={-1,4,2,-3,7,3,-4};
    int neg[3];
    int pos[4];
    int ans[7];
    int i,j,k;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(i=0,j=0,k=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            neg[j]=arr[i];
            j++;
        }
        else
        {
            pos[k]=arr[i];
            k++;
        }
    }
    for(i=0;i<3;i++)
    {
        ans[i]=neg[i];
    }
    for(j=0;i<7;i++,j++)
    {
        ans[i]=pos[j];
    }
    for(i=0;i<7;i++)
    {
        printf("%d\t",ans[i]);
    }

}


// Arrange the array in order of - Zero, Negative, Positive

#include<stdio.h>
 int main()
 {
     int a[6]={-1,0,5,-2,0,3};
     int size=sizeof(a)/sizeof(int);
     int low=0,mid=0,high=size-1;
     for(;mid<high;)
     {
         if(a[mid]==0)
         {
             int t=a[mid];
             a[mid]=a[low];
             a[low]=a[mid];
             low++,mid++;
         }
         if(a[mid]<0)
         {
             mid++;
         }
         if(a[mid]>0)
         {
             int t=a[mid];
             a[mid]=a[high];
             a[high]=a[mid];
             high--;
         }
     }
     for(int i=0;i<size;i++)
     {
         printf("%d\t",a[i]);
     }
 }

 
//
#include<stdio.h>
int main()
{
    int a[6]={-1,0,5,-2,0,3};
    int b[6];
    int i,j;
    int size=sizeof(a)/sizeof(int);

    for(i=0,j=0;i<size;i++)
    {
        if(a[i]==0)
        {
            b[j]=a[i];
            j++;
        }

    }
    for(i=0;i<size;i++)
    {
        if(a[i]<0)
        {
            b[j]=a[i];
            j++;
        }

    }
    for(i=0;i<size;i++)
    {
        if(a[i]>0)
        {
            b[j]=a[i];
            j++;
        }

    }
    for(i=0;i<size;i++)
    {
        printf("%d\t",b[i]);
    }
}