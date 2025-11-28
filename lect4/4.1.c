//switch case
//day of week program
#include<stdio.h>
int main(){
    int day;
    printf("enter a choice: ");
    scanf("%d",day);
    switch (day)
    {
    case 1:
        printf("MONDAY");
        break;
        case 2:
        printf("TUESDAY");
        break;
        case 3:
        printf("WEDNESDAY");
        break;
        case 4:
        printf("THURSDAY");
        case 5:
        printf("FRIDAY");
        case 6:
        printf("SATURDAY");
        case 7:
        printf("SUNDAY");
        break;
    default:
    printf("INVALID DAY");
        break;
    }
    return 0;
}
//month name
#include<stdio.h>
int main(){
    int month;
    printf("enter a choice:");
    scanf("%d",month);
    switch (month)
    {
    case 1:
     printf("JANUARY");
        break;
    case 2:
    printf("FEBRUARY");
    break;
    case 3:
     printf("MARCH");
     break;
     case 4:
     printf("APRIL");
     break;
     case 5:
     printf("MAY");
     case 6:
     printf("JUNE");
     break;
     case 7:    
     printf("JULY");
     break;
     case 8:
     printf("AUGUST");
     break;
     case 9:
     printf("SEPTEMBER");
     break;
     case 10:
     printf("OCTOBER");
     break;
     case 11:
     printf("NOVEMBER");
     break;
     case 12:
     printf("DECEMBER");
    default:
    printf("INVALID MONTH");
        break;
    }
    return 0;
}
//grade system
#include<stdio.h>
int main(){
    char grade;
    printf("enter grade (A,B,C,D,E):");
    scanf("%c,grade");
    switch (grade)
    {
    case 'A':
        printf("EXCELLENT\n");
        break;
    case 'B':
       printf("GOOD\n");
        break;
    case 'C':
        printf("AVERAGE");
        break;
    case 'D':
        printf("BELOW AVERAGE");
        break;
    case 'E':
        printf("FAIL");
        break;
    default:
        printf("INVALID GRADE");
        break;
    }
    return 0;
}
//traffic light system
#include<stdio.h>
int main(){
    char colour;
    printf("enter colour of traffic light (r/y/g):");
    scanf("%c,colour");
   switch (colour)
   {
   case'r':
    printf("STOP");
    break;
   case'y':
   printf("WAIT");
   break;
   case'g':
    printf("GO");
    break;
   default:
    printf("INVALID COLOUR");
    break;
   }
   return 0;
}
// vowel and consonant
#include<stdio.h>
int main(){
    char ch;
     printf("enter a character:");
     scanf("%c,ch");
     switch (ch)
     {
     case 'a': case 'e': case 'i': case 'o': case 'u':
        printf("vowels\n");
        break;
     default:
     printf("consonants");
        break;
     }
     return 0;
}
// even or odd
#include<stdio.h>
int main(){
    int num;
    printf("enter number:");
    scanf("%d,num");
    switch (num%2)
    {
    case 0:
        printf("even");
        break;
    case 1:
        printf("odd");
    default:
        break;
    }
}
// area calculator
#include<stdio.h>
int main(){
    float r,l,b,s;
    int choice;
    printf("1.circle\n 2.square\n 3.rectangle\n");
    printf("enter choice:");
    scanf("%d,&choice");
    switch(choice)
    {
    case 1:
        printf("enter radius:");
        scanf("%f,r");
        printf("area=%2f\n",3.14*r*r);
        break;
    case 2:
        printf("enter side:");
        scanf("%f,&s");
        printf("area=%2f\n",s*s);
    case 3:
        printf("enter length and breadth:");
        scanf("%f,&l,&b");
        printf("area=%2f\n",l*b);
    default:
    printf("invalid choice\n");
        break;
    }
}