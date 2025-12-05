//  TO print maxsum of array
//[10,20,30,40,50]=>[20,30,40,50,10]


#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={0,5,-5,3,-4,-5,-7};
    int Maxsum=INT_MIN;
    for (int i = 0; i < 6; i++)
    {
        int currSum=0;
        for (int j = i; j < 6; j++)
        {
            currSum=currSum+arr[j];
            if (currSum>Maxsum){
                Maxsum=currSum;
            }
        }
    }
    printf("%d",Maxsum);
}

//

#include<stdio.h>
int main(){
int arr[5]={1,2,3,2,2};
 int isTrue=1;
 for(int i=0;i<5/2;i++){
     if(arr[i]!=arr[5-i-1]){
         isTrue=0;
     }
 }
 if(isTrue==1){
     printf("haiii");
 }else{
   printf("nhi haiiii");   

     int arr[5]={10,20,30,40,50};
     int first=arr[0];
     for(int i =0;i<5;i++){
         arr[i]=arr[i+1];
     }
     arr[4]=first;
     for(int k=0;k<5;k++){
         printf("%d",arr[k]);

     }
    }
}

//


#include <stdio.h>
#include<limits.h>
    
   int    BSearch(){
      int arr[6]={1,2,3,4,5,6};
    int target=11;
    int s=0;
    int end=5;
    while(s<=end)
    {
        int mid=(s+end)/2;
        if(arr[mid]==target){
            return mid;
            // printf("%d",mid);
        }
        else if(arr[mid]<target){
            s=mid+1;

        }else
        {   end=mid-1;
           
        }
        

    }
    return -1;
    


   }

   void p(int *a){
    *a=100;
    printf("%d",*a);

   }
int main(){
    int a=5;


    p(&a);
    printf("%d",a);
    int *b=&a;
printf("%d",&a);

//   int data=    BSearch();
//   printf("%d",data);
}