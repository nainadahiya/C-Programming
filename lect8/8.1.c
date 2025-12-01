//Q.1) * * *
//     * * *
//     * * * 
#include<stdio.h>
int main(){
     for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++){
             printf("*");
     }
     printf("\n");
}
}

//Q.2) *
//      * *
//      * * *
#include<stdio.h>
int main(){
    for(int i=0;i<3;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}

//Q.3) * * *
//     * *
//     *
#include<stdio.h>
int main(){
    for(int i=0;i<3;i++){
        for(int j=2;j>=i;j--){
            printf("*");
        }
        ("\n");
    }
}

//Q.4) - - - *
//     - - * *
//     - * * *
#include<stdio.h>
int main(){
    for(int i=0;i<3;i++){
        for(int j=2;j>=i;j--){
            printf(" -"); //can also use printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("*");
            }
            printf("\n");
        }
    }
//Q.5) - * * *
//     - - * *
//     - - - *
#include<stdio.h>
int main(){
    for(int i=0;i<3;i++){
        for(int j=0;j<=i;j++){
            printf("-"); //can also use printf(" ");
        }
        for(int j=2;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
}