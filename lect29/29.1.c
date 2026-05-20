//topic : recursion
//to check array is palindrome
#include<stdio.h>
int palindrome(int arr[],int i,int j){
    if (i>=j)
    {
        return 1;
    }
    if (arr[i]!=arr[j])
    {
        return 0;
    }
    return palindrome(arr,i++,--j);
}
int main(){
    int arr[3]={1,2,3};
    int startindex=0;
    int endindex=2;
    if (palindrome(arr, startindex,endindex))
    {
        printf("array is palindhrome");
    }
    else{

        printf("array ids not palindrome");
    }
}


//sorted array
#include<stdio.h>
int sorted(int arr[],int i, int j){
    if (i>=j)
    {
        return 1;
    }
    if (arr[i]>arr[i+1])
    {
        return 0;
    }
    return sorted(arr,i+1,j);
}
int main(){
    int arr[3]={1,2,3};
    int i=0;
    int j=2;
    int data=sorted(arr,i,j);
    printf("%d",data);
}

