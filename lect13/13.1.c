//find pair in array whose sum is 7

#include<stdio.h>
int main(){
    int arr[7]={1,3,4,6,-5,5,1};
    int k=7;
    for(int i=0;i<7;i++){
        for( int j=0;j<7;j++){
            if(arr[i]+arr[j]==k){
                printf("%d %d",i,j);
            }

        }
    }
}

//
//array plaindrome
#include<stdio.h>
int main(){
    int arr[5]={1,2,3,2,1};
   int check =1;
   for (int i = 0; i < 5/2; i++)
   {
    if (arr[i]!=arr[5-1-i])
    {
        check=0;
        break;
    }
    
   }
   if (check==1)
   {
    printf("haii");
   }
   else
   {
    printf("aisa kuch nhii haii");
   }
}

   //change the position of array

#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50},i;
    int t=a[0];
    for(i=0;i<4;i++)
    {
        a[i]=a[i+1];
    }
    a[i]=t;
    for(i=0;i<5;i++)
    {
        printf("\t%d",a[i]);
    }
}