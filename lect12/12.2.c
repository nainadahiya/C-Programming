//sum of array
#include<stdio.h>
int main(){
    int arr[5]={0,1,2,3,4};
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    printf("sum of array:%d",sum);
}

//max or min number

#include<stdio.h>
int main()
{
    int a[5]={1,0,5,9,7};
    int max=a[0],min=a[0];
    for(int i=0;i<5;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("Min = %d max = %d",min,max);
}

//
#include<stdio.h>
int main(){
    int arr[5]={3,12,52,34,5};
    int target=3;
    for (int i = 0; i < 5; i++)
    {
        if("%d",arr[i]==target){
       printf("%d",arr[i]);
       break;
        }
    }
} 

//

#include<stdio.h>
int main(){
    int arr[5]={3,12,54,34,5};
    int n=5,i;
    for(i=0;i<5;i++){
        if(n==arr[i])
        break;
    }
    if(n==arr[i]){
        printf("element is found !!");
    }
    else{
        printf("element  is not found !!");
    }
}

//

//WAP to find missing number

 #include<stdio.h>
 int main()
 {
     int arr[5]={1,2,3,5,6},i;
     for(i=0;i<4;i++)
     {
         if(arr[i]+1!=arr[i+1])
         {
             printf("Missing Number = %d",arr[i]+1);
             break;
         }
     }
     if(i==4)
    {
         printf("Nothing is missing !!");
     }
 }

 //Second Approach 

#include<stdio.h>
int main()
{
    int a[5]={1,2,3,5,6};
    int sum=0,total=0,i;
    int size=sizeof(a)/sizeof(a[0]);
    for(i=0;i<size;i++)
    {
        sum=sum+a[i];
        
    }
    for(i=1;i<=a[size-1];i++)
    {
        total=total+i;    
    }
    int miss=total-sum;
    printf("Missing : %d",miss);
}