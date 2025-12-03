//magic number

#include<stdio.h>
int main()
{
    int a=1234;
    int n=a,last,sum;
    for(;n!=0;)
    {            
            sum=0;
            for(;n!=0;n=n/10)
            {
                int last=n%10;
                sum=sum+last;
               // printf("%d\n",sum);
                    
            }
            if(sum>9)
            {
                n=sum;
            }
    }
    if(sum==1)
    {
        printf("It's a magic number !!");
    }
    else
    {
        printf("It's not a magic number !! %d",sum);
    }
}

//loop

#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
}

//print array

#include<stdio.h>
int main(){
    int arr[6]={0,1,2,3,4,5};
    printf("%d",arr[2]);
}

//reverse loop

#include<stdio.h>
int main(){
    int arr[5]={3,4,5,6,7};
    for(int i=4;i>=0;i--){
        printf("%d",arr[i]);
    }
}