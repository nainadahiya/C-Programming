//topic : recurssion
//to print number from 1 to 5
#include<stdio.h>
void sum(int a){
    if(a==0){
        return ;
    }
    sum(a-1);
    printf("%d\n",a);
}
int main(){
    sum(5);
}

//to print number from 5 to 1
#include<stdio.h>
void sum(int a){
    if(a==0){
        return ;
    }
    printf("%d\n",a);
    sum(a-1);
}
int main(){
    sum(5);
}

//to print sum of recurrsion

#include<stdio.h>
int sum(int a){
    if(a==0){
        return 0;
    }
    return a+sum(a-1);
}
int main(){
    int data= sum(3);
    printf("%d",data);
}

//to print factorial
#include<stdio.h>
int factorial(int a){
    if(a==0||a==1){
        return 1;
    }
    return a*factorial(a-1);
}
int main(){
    int data= factorial(3);
    printf("%d",data);
}

//to print sum in array
#include<stdio.h>
int sum (int arr[],int n){
    if(n==0){
        return 0;
    }
    return arr[n-1]+sum(arr,n-1);
}
int main(){
    int arr[3]={3,4,1};
    int n=3;
    int data= sum(arr ,n);
    printf("%d",data);
}

//to print 2 to the power n

#include<stdio.h>
int power(int x,int n){
    if(n==0){
        return 1;
    }
    return x*power(x,n-1);
}
int main(){
    int x,n;
    int result=power(x,n);
    printf("%d",result);
}
