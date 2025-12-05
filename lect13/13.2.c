 #include<stdio.h>
 int main()
 {
     int a[5]={1,2,3,2,1},i,j,rev[5],count=0;
     for(i=0,j=4;i<5;j--,i++)
     {
         rev[i]=a[j];

     }
     for(count=0,i=0;i<5;i++)
     {
         if(rev[i]!=a[j])
         {
             count++;
             break;
         }

     }
     if(count>0)
     {
         printf("Pelindrome !!");
     }
     else
     {
         printf("Pelindrome !!");
     }

 }

 // second approach
#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 2, 1};
    int i;
    for (i = 0; i <= 5 / 2; i++)
    {
        if (a[i] == a[5 - 1 - i])
        {
            break;
        }
    }
    if (i > 5 / 2)
        printf("Pelindrome !!");
    else
        printf("Not Pelindrome !!");
    return 0;
}

//
#include<stdio.h>
int main()
{
    int i,j,a[5]={-10,20,30,-40,50},max=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i!=j)
            if(a[i]+a[j]>max)
            {
                max=a[i]+a[j];
            }
        }
    }
    printf("Max=%d",max);
}