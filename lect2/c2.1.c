// if else
#include<stdio.h>
int main(){
    int a= 76;
    int m= 50 ;
    if (a>75 && m>75)
    {
        printf("A");
    }
    else if (a>75&& m>70 &&m<75)
    {
        printf("B");
    }
   else if (a>75&& m>50& m<33)
   {
       printf("C");
   }
    else if (a>75&& m<=50&&m>33)
    {
       printf("D");
    }
    else{
       printf("apka kuch nhi ho skta");
    }
    return 0;
}

// even odd
#include<stdio.h>
int main(){
    int a=11;
    int b=14;
    if (a%2==0)
    {
        printf("even");
    }
    else{
        printf("odd");
    }
    return 0;
}
// sum
#include<stdio.h>
int main(){
    int a=3;
    int b=5;
    int sum=a++ + ++b + --b + b-- + ++a;
    printf("%d,sum");
}
//hii
#include<stdio.h>
int main(){
    int a=4;
    if (a<5)
    {
    printf("hello  hiii");
    }
    
}