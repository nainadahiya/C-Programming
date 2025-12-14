//string question
#include<stdio.h>
#include<string.h>
int main(){
    char str[]="hello";
    char target='e';
    char newstr[100];
    int j=0;
    int ln= strlen(str);
    for (int i = 0; i < ln; i++)
    {
        if (str[i]!=target)
        {
            newstr[j]=str[i];
            j++;
        }
    }
    printf("%s",newstr);
}

//
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter a string:");
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int freq[256]={0};
    int ln=strlen(str);
    for (int i = 0; i < ln; i++)
    {
        freq[str[i]++];
    }
    int fount=0;
    for (int i = 0; i < ln; i++)
    {
        if (freq[str[i]]==1)
        {
            printf("%c",str[i]);
            fount=1;
            break;
        }
    }
    for (int i = 0; i < 256; i++)
    {
        if (freq[i]>0)
        {
            printf("%c:%d",i,freq[i]);
        }
    }
    return 0;
}