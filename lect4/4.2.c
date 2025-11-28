//currency converter
#include<stdio.h>
int main(){
    int choice ;
    float INR ;
    printf("enter amount in INR:");
    scanf("%f,INR");
    switch (choice)
    {
    case 1:
        printf("USD=%2f\n",INR*0.012);
        break;
    case 2:
        printf("EUR=%2f\n",INR*0.011);
        break;
    default:
    printf("INVALID CHOICE\n");
        break;
    }
}

//atm program
#include <stdio.h>

int main()
{
    // int a=1;
    int amt,bal=1000,ch;
    printf("\nChoices : ");
    printf("\n1.check balance ");
    printf("\n2.deposit");
   printf("\n3.withdraw");
   printf("\nEnter choice : ");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1: printf("\nThe Balance : %d",bal);
            break;
    case 2 : printf("\nEnter amount : ");
            scanf("%d",&amt);
            bal+=amt;
            printf("\nCurrent Balance : %d",bal);
   }
}
