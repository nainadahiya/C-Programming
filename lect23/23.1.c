//structure
 
#include<stdio.h>
#include<string.h>
struct address 
{
    int pincode;
};
struct student
{
    char name[50];
    int rollN;
    int age;
    struct address s2;
};
int main(){
    struct address s1;
    s1.age=15;
    strcpy(s1.name,"hello");
    printf("%d",s1.age);
    printf("%s",s1.name);
    s1.s2.pincode=482001;
}

//multiple data input

#include<stdio.h>
#include<string.h>
struct student 
{
    char name[50];
    int rillN;
    int age;
};
int main(){
    struct student s1[3];
    for (int i = 0; i < 3; i++)
    {
        printf ("enter your name%d",i);
        scanf("%s",s1[i].name);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n",s1[i].name);
    }
    
}