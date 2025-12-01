//WAP to print square pattern
#include<stdio.h>
int main(){
    for (int i=0;i<3;i++)//outer loop
    {
        for(int j=0;j<3;j++);//inner loop
        {
            printf("*");
        }
        printf("\n");
    }
}

//
#include<stdio.h>
int main(){
    for(int i=0;i<3;i++){
        for(int j=2;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
}
//
#include<stdio.h>
int main(){
    for(int i=0;i<3;i++){
        for(int j=2;j>0;j--){
            if(i<j){
                printf(" ");
                continue;
            }
            printf("*");
        }
        printf("\n");
    }
}
//
#include<stdio.h>
int main(){
    for(int i=0;i<3;i++){
        for(int j=2;j>=0;j--){
            if(i<j){
                printf(" ");
                continue;
            }
            printf("*");
        }
        printf("\n");
    }
}
//
#include<stdio.h>
int main(){
    for(int i=0;i<3;i++){
        for(int j=2;j>=0;j--){
            printf(" ");
        }
        for(int k=2;k>=i;k--){
            printf("*");
        }
        printf("\n");
       }
}