//loops//for loop
#include<stdio.h>
int main(){
    int num=1234;
    int sum =0;
    while (num>0)
    {
        int lastdigit=num%10;
        sum=sum+lastdigit;
        num=num/10;
    }
    printf("%d,sum");

return 0;
}
//
#include<stdio.h>
int main(){
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",i);
    }
    for (int i = 10; i > 0; i--)
    {
        printf("%d\n",i);
    }
    
}
//sum
#include<stdio.h>
int main(){
    int sum=0;
    for (int i = 1; i < 10; i++)
    {
        sum=sum+i;
        printf("%d\n",sum);
    }
}