#include<stdio.h>
/* 
a. Write a program to check if a given number is
Armstrong number or not.
 */
int main(){
    int num;
    printf("Enter a number to check Armstrong or not : ");
    scanf("%d",&num);
    int temp,sum = 0,c;
    temp = num;
    while (num != 0)
    {
        /* code */
        c = num % 10;
        sum = sum + (c * c *c);
        num = num / 10;
    }
    
    if(temp == sum){
        printf("its a amstrong num\n");
    }else{
          printf("its not a amstrong num\n");
    }

    return 0;
}