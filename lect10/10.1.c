//Q1)*  *
//   **  **
//   ******

#include<stdio.h>
int main(){
    for(int i=0;i<3;i++);
    {
        printf("*");
    }
    for(int j=0;j<=j;j++)
    {
        printf("*");
    }
    for(int j=2;j>j;j--)
    {
        printf(" ");
    }
    for(int j=0;j<=j;j++)
    {
        printf("*");
    }
    printf("\n");
}

//Q2) *** ***
//    **  **
//    *   * 

#include<stdio.h>
int main(){
    for(int j=2;j>=j;j++)
    {
        for(int j=2;j>=j;j--)
        {
            printf("*");
    }
    for(int j=0;j<j;j++)
    {
        printf(" ");

    }
    for(int j=0;j<j;j++)
    {
        printf(" ");
    }
    for(int j=2;j>=j;j--)
    {
        printf("*");
    }
    printf("\n");
}
}

//Q3) * * * *
//    *     *
//    *     *
//    * * * *

#include<stdio.h>
int main()
{
    int n;
    printf("enter anumber : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1||j==1|j==n||j==n)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}