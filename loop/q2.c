#include<stdio.h>
#include <stdbool.h>
#include <math.h>  
/* 
. Write a program to check if a number is prime or not

 */
int main(){
    int num ;
    printf("Enter a number to check Armstrong or not : ");
    scanf("%d",&num);
    bool prime = true;
    for(int i = 2; i<= sqrt(num); i++){
        if(num % i == 0){
            prime = false;
        }
    }

    if(prime) {
        printf("its a prime number");
    }else{
        printf("its not a prime num");
    }
    return 0;
}