#include<stdio.h>
int main(){
    int a = 5;
    printf("enter a number :");
    scanf("%d ,&a");
    printf(" you entered : %d\n",a);
    return 0;
}
//arithmatic operator

#include<stdio.h>
int main(){
int x = 10, y = 3;

printf("x + y = %d\n", x + y );
printf("x - y = %d\n", x - y );
printf("x * y = %d\n", x * y );
printf("x / y = %d\n", x / y );
printf("x %%y = %d\n", x % y );
return 0;
}
// type casting ( to get decimal result in division)
#include<stdio.h>
int main(){ 
    int x = 10 , y = 5;
float result = (float )x / y;
printf("type casted divsion: %2f\n", result);
return 0;
}
// increament and decrement
#include<stdio.h>
int main(){
    int num = 6;
    printf("num =%d,\n", num);
    printf("num++ =%d\n", num++); //post increament (first print uske bad increase hogi)
    printf("now num =%d \n",num);
    printf("++num =%d\n", ++num); //pre increament 
    printf("now num =%d\n",num);
return 0;
}
// size of operator
#include<stdio.h>
int main(){ 
    int x = 10 , y = 5;
float result = (float )x / y;
printf("type casted divsion: %2f\n", result);
return 0;
}
// increament and decrement
#include<stdio.h>
int main(){
    int num = 6;
    printf("num =%d,\n", num);
    printf("num++ =%d\n", num++); //post increament (first print uske bad increase hogi)
    printf("now num =%d \n",num);
    printf("++num =%d\n", ++num); //pre increament 
    printf("now num =%d\n",num);
return 0;
}
// size of operator
#include<stdio.h>
int main(){
    int x = 10 , y = 5;
float result = (float )x / y;
printf("type casted divsion: %2f\n", result);
return 0;
}
// size of operator
#include<stdio.h>
int main(){
     printf("\nsize of int = %zu bytes\n", sizeof(int));
    printf("size of float = %zu bytes\n",  sizeof(float));
    printf("size of char = %zu bytes\n", sizeof (char) );
    return 0;
}
//ASCII example
#include<stdio.h>
int main(){
    int ascii=65;
    char ch=ascii;
    printf("ascii value %d = character '%c'\n",ascii);
    {
       return 0;
    }
    
}
//