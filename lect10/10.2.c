#include<stdio.h>
int main()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf(" ");
        }
        printf("*");
        for(int j=3;j>i;j--)
        {
            printf(" ");
        }
        for(int j=3;j>i;j--)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for(int i=0;i<4;i++)
    {
        
        for(int j=3;j>+i;j--)
        {
            printf(" ");
        }
        printf("*");
        for(int j=0;j<i;j++)
        {
            printf(" ");
        }
        for(int j=0;j<i;j++)
        {
            printf(" ");
        }
        printf("*");
     printf("\n");
    }
}

//WAP to find the addition of digits
 #include<stdio.h>
  int main()
 {
     int n,rev=0,b;
     printf("Enter a number : ");
     scanf("%d",&n);
     b=n;
     for(;b!=0;b=b/10)
     {
         int last=b%10;
         rev=rev*10+last;
     }
     printf("rev = %d",rev);
 }

 //Digit Count

#include<stdio.h>
int main()
{
    int n,count=0,b;
    printf("Enter a number : ");
    scanf("%d",&n);
    b=n;
    if(n==0)
    {
        count=1;
    }
    else
    {
        for(;b!=0;b=b/10)
        {
            int last=b%10;
            count++;
        }
    }
    printf("count = %d",count);
}