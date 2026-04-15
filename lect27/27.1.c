//bitwise question
//find xor
#include<stdio.h>
int main(){
    int arr[5]={4,5,3,4,5};
    int xor=0;
    for (int i = 0; i < 5; i++)
    {
        xor=xor^arr[i];
    }
    printf("%d",xor);
}

//bitwise swapping without using any 3rd varaible
#include<stdio.h>
int main(){
    int a=5,b=3;
    printf("before swapping a=%d and b=%d\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("after swapping a=%d and b=%d\n",a,b);
}

//find missing number in given array
#include<stdio.h>
int main(){
    int arr[4]={1,2,4,5};
    int xor1=0;
    int xor2=0;
    for (int i = 1; i <=5; i++)
    {
       xor1=xor1^i;
    }
    for (int i = 0; i < 4; i++)
    {
        xor2=xor2^arr[i];
    }
    printf("%d",xor1^xor2);
}
//

//TOPIC:SHIFT
//LEFT SHIFT OF ELEMENT by 1

#include<stdio.h>
int main(){
    int a=10;
    int result;
    result=a<<1 ;//left shift by 1
    printf("original value of a=%d\n",a);
    printf(" after left shift by 1=%d\n",result);
}

// left shift by 2

#include<stdio.h>
int main(){
    int a=3;
    int result;
    result=a<<2 ;//left shift by 2
    printf("original value of a=%d\n",a);
    printf(" after left shift by 2=%d\n",result) ;
}

// right shift by 1

#include<stdio.h>
int main(){
    int a=10;
    int result;
    result=a>>1 ;//right shift by 1
    printf("original value of a=%d\n",a);
    printf(" after right shift by 1=%d\n",result) ;

}

//right shift by 2

#include<stdio.h>
int main(){
    int a=20;
    int result;
    result=a<<1 ;//right shift by 2
    printf("original value of a=%d\n",a);
    printf(" after right shift by 2=%d\n",result) ;
}
