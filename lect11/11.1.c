#include<stdio.h>
int main(){
    int a=5;
    int b=10;
    int c=a+b;
    return c;
}
int main(){
    int data=sum();
    printf("%d",data);
}

//
#include<stdio.h>
int main(){
    int a=5,b=10;
    printf("%d",a+b);
}
int main(){
    sum();
}
//12345 => 1+2+3+4=10=> 1+0=1
#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
}

//
#include<stdio.h>
int x(){
    for(int j=0;j<5;j++){
        if(j==j ||j==(4-j))
        printf("*");
    }
    printf("\n");
}
int main(){
    x();
}