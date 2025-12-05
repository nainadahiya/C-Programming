//TO PRINT MAX SUM OF ARRAY
#include<stdio.h>
int main(){
    int arr[5]={1,2,-3,4,-1};
    int maxSum=0;
    for (int i = 0; i <5; i++)
    {
        int curSum=0;
    
    for (int j = i; j < 5; j++)
    {
        curSum=curSum+arr[j];

    
    if (curSum>maxSum)
    {
        maxSum=curSum;
    }
}
    }
    printf("%d", maxSum);
    
    return 0;
    
    }

    //TO PRINT MAX SUM ARRAY 


#include<stdio.h>
int main(){
    int arr[5]={-8,2,-3,4,9};
     int maxSum=0;
     int currSum=0;
     for(int i=0;i<5;i++){
         currSum+=arr[i];
      if(currSum>maxSum){
             maxSum=currSum;
   }
        if(currSum<0){
         currSum=0;
      }
   }

for(int i=0;i<5;i++){
       int curSum=0;
     for(int j=i;j<5;j++){
          curSum= curSum+arr[j];
            if(curSum>maxSum){
               maxSum=curSum;
           }
      }
   }
    printf("%d",maxSum);
}


//TO MERGE TO ARRAY


#include<stdio.h>
int main(){
    int a[3]={1,2,3};
    int b[3]={4,5,6};
    int merged[6]={1,2,3,4,5,6};
    int i,j;
    for (int i = 0; i < 3; i++)
    {
        merged[i]=a[i];
        for (int j = 0; j <3; j++)
        {
           merged[i+j]=b[j];
        }
        
    }
    printf("merged array:");
    for ( i = 0; i < 6; i++)
    {
        printf("%d",merged[i+j]);
    }
    return 0;
}