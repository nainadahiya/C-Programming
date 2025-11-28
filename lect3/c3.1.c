//if else

#include<stdio.h>
int main(){
 int n =5;
 if (n %2==0)
 {
    printf("even");
 }
 else{
 printf("odd");
}
}

// positive , negative and zero
#include<stdio.h>
int main(){
    int n=3;
    if (n==0)
    {
        printf("ZERO");
    }
    else if (n>0)
    {
        printf("POSITIVE");
    }
    else{
        printf("NEGATIVE");
    }
    return 0;
}

// large of two number
#include<stdio.h>
int main(){
    int a=8;
    int b=10;
    scanf("%d %d",&a,b);
    if (a>b)
    {
      printf("%d is larger",a);
    }
    else if (b>a)
    {
        printf("%d is larger" ,b);
    }
    else{
    printf("equal");
    }
}