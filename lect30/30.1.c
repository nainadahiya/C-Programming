//CHAPTER 1
//Code to store data 

#include<stdio.h>
int main(){
    int age = 22;
    float pi = 3.14;
    char hashtag='#';
    scanf("%d",&age);
    scanf("%f",&pi);
    scanf("%c",&hashtag);
    printf("age is %d\n",age); //Integers
    printf("the value of pi is %f\n",pi); // real numbers
    printf("the hastag sign is %c\n", hashtag); // character
}



//code to print sum 

#include<stdio.h>
int main(){
    int a,b;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    int sum=a+b;
    printf("the sum is %d",sum);
}