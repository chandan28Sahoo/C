#include<stdio.h>
#include<math.h>
/* 
. Write a program to check if a number is prime or not
 */

double squarRoot(int num);

int main(){
    int num ;
    printf("Enter a number to get square root : ");
    scanf("%d", &num);
    double sq = squarRoot(num);
    printf("\n%.2f",sq);
    return 0;
}

double squarRoot(int num){
    double x = pow(num,.5);
    return x;
}