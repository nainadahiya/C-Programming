//swapping two numbers in pointre

#include<stdio.h>
int main()
{
    int a=10,b=20;
    int *p1=&a,*p2=&b;
    printf("before swapping:a=%d,b=%d\n",*p1,*p2);
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("after swapping:a=%d,b=%d\n",*p1,*p2);
}

//swapping of two no in pointer without using any 3rd varaible
//pointer ke sath swapping krne k liye bina kisi third varible k hum arithmatic operators (+,-,/)ka use kr skte hai
#include<stdio.h>
int main()
{
    int a=20,b=40;
    int *p1=&a ,*p2=&b;
    printf("before swapping:a=%d,b=%d\n",*p1,*p2);
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    printf("after swapping:a=%d,b=%d\n",*p1,*p2);
}