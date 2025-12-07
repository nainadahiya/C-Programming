//pointer

 #include<stdio.h>
int main(){
    int a =10,*x;
    printf("%d", *x);

}

//call by value

#include<stdio.h>
int sum(int *x, int *y)
{
    *x=50;
    *y=50;
    int c=(*x)+(*y);
    return 0;

}
int main(){
    int x=10;
    int y=20;
    int data=sum(x,y);
    printf("%d",data);
    printf("%d",x+y);
    printf("\n");

}

//
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,45,6};
    int*p=arr;
    for(int i=0;i<5;i++)
    {
        printf("%d",*(p));
        p++;
    }
}
    