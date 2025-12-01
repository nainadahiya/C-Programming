// Q) A B C D E F G H I
//      J K L M N O P
//        Q R S T U
//          V W X
//            Y

#include<stdio.h>
int main(){
    int ch=65;
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            printf(" ");
        }
        for(int k=4;k>=i;k--){
            printf("%c",ch++);
        }
        for(int l=4;l>i;l--){
            printf("%c",ch++);
        }
        printf("\n");
    }
}

//buttrefly pattern
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *



#include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        for(int k=4;k>i;k--)
        {
            printf(" ");
        }
        for(int m=4;m>i;m--)
        {
            printf(" ");
        }
        for(int l=0;l<=i;l++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<5;i++)
    {
        
        for(int n=4;n>=i;n--)
        {
            printf("*");
        }
        for(int o=1;o<=i;o++)
        {
            printf(" ");
        }
        
        for(int p=1;p<=i;p++)
        {
            printf(" ");
        }
        for(int q=4;q>=i;q--)
        {
            printf("*");
        }
        printf("\n");
    }
}

//

// Q) * * * *
//     * * *
//      * *
//       * 

#include<stdio.h>
int main()
{
    int n=4;
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<i;j++)
        {
            printf(" ");
        }
        for(int k=i; k<n;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}