//string

#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "abc";
    int freq[256] = {0};
    int in = strlen(str);

    for (int i = 0; i < in; i++){
        freq[str[i]]++;
    }

    for (int i = 0; i < 256; i++){
        if (freq[i] > 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }
    return 0;
}

//
#include<stdio.h>
#include<string.h>
int main(){
    char str[]="hello";
    int count;
    int in= strlen(str);
    for(int i=0;i<in-1;i++){
        count=0;
        for(int j=0;j<in;j++){
              
            if( str[i]==str[j]){
                count++;
            }
        }
         if(count==0){
            printf("%c",str[i]);
         }
    }
}

//pelindrome

#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="madam";
    int ln=strlen(str);
    int i,j,count=0;
    for (i = 0,j=ln-1;j>=0; i++,j--)
    
    {
        if(str[i]!=str[j])
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("pelindrome");
    }
    else
    {
        printf("Not pelindrome");
    }
}