//malloc and calloc
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter size:");
    scnf("%d",&n);
    int *arr=(int *)malloc(n* sizeof(int));
    //int*arr=(int*)calloc(n,sizeof(int));
    printf("enter %d elements:\n",n);
    for (int i = 0; i < n; i++)
    scanf("%d",&arr[i]);
    free(arr);
    printf("\nnow enter new size:");
    int newsize;
    scanf("%d",&newsize);
    arr=(int*)realloc(arr, newsize*sizeof(int));
    printf("enter %d new element:\n", newsize);
    for(int i = 0; i < newsize; i++)
    scanf("%d,&arr[i]");
    printf("\nupdated array:\n");
    for (int i = 0; i < newsize; i++)
    {
        printf("%d",arr[i]);
    }

    }


//string question
#include <stdio.h>
#include <string.h>
int main(){
    char str[]="bca";
      int in = strlen(str);

       for(int i=0;i<in-1;i++){
        for(int j=i+1;j<in;j++){
            if(str[i>str[j]]){
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
       }
       printf("%s",str);
       char substr[]="abc";
       if(strstr(str,substr)!=NULL){
        printf("ture");
       }
       else{
        printf("false";)
       }
}