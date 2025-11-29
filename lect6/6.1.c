//loops
#include<stdio.h>
int main(){
    int n=5;
    int i;
    if (n<=1)
    {
        printf("not prime");
    }
    for (int i =2; i <n; i++){
        if (i%n==0)
        {
            printf("nahi hai prime");
        }
        else
        {
             printf("\n prime haii");
        }
    }
    return 0;
}

//revese the number
#include<stdio.h>
int main(){
    int num;
    scanf("%d",num);
    int original=num;
    int res=0;
    while(num!=0);
    {
        int lastdigit=num%10;
        res=res*10+ lastdigit;
        num=num/10;
    }
    if (original==res)
    {
        printf("p");
    }
    else{
        printf("not");
    }
    return 0;
}

//palindrome
#include<stdio.h>
int main(){
    int num=121;
    int original=num;
    int res=0;
    while(num=0)
    {
        int lastdigit=num%10;
        res=res*10+lastdigit;
        num=num/10; 
    }
    if(original==res)
    {
        printf("palindrome");
    }
    else
    {
        printf("nahi hai");
    }
    return 0;
}

//prime
#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",n);
    int candidate=n+1;
    while(1)
    {
        int isprime=1;
    }
    for (int i = 2; i*i <= candidate; i++)
    {
        if(candidate%i==0)
        {
          int isprime=0;
          break;

        }
    }
    if("isprime");
    {
      printf("next prime after %dis%d\n",n,candidate);
    }
    candidate++;
    return 0;
} 