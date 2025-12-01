//Q1)0
//   0 1
//   0 1 2
#include<stdio.h>
int main(){
    for(int i=0;i<3;i++){
        for(int j=0;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }

}

// 2Q) 1
//    2 3
//    4 5 6

#include<stdio.h>
int main(){
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<=i;j++){
            sum=sum+1;
            printf("%d",sum);
        }
        printf("\n");
    }
}

// 3Q) A
//    B C
//    D E F
//    G H I J

#include<stdio.h>
int main(){
    int c=65; //for small a to z - c=97
    for(int i=0;i<4;i++){
        for(int j=0;j<=i;j++){
            printf("%c",c++);
        }
        printf("\n");
    }
}

//

// 4Q)     *
//    *   *   *
// *  *   *   *   *

#include<stdio.h>
int main(){
    for(int i=0;i<5;i++){
        for(int j=4;j>=i;j--){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("*");
        }
        for(int l=1;l<=i;l++){
            printf("*");
        }
        printf("\n");
    }
}

// 5Q)        A
//         B C D
//       E F G H I
//     J K L M N O P
//   Q R S T U V W X Y

#include<stdio.h>
int main(){
    int ch=65;
    for(int i=0;i<5;i++){
        for(int j=4;j>=i;j--){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("%c",ch++);
        }
        for(int l=1;l<=i;l++){
            printf("%c",ch++);
        }
        printf("\n");
    }
}