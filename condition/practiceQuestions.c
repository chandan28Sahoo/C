#include<stdio.h>

int main(){
    int marks;
    printf("enter number (1-100) : ");
    scanf("%d", &marks);
    if(marks >= 0 && marks <= 30){
        printf("fail  \n");
    }else if(marks > 30 && marks <= 100){
        printf("pass \n");
    }else{
        printf("wrong input \n");
    }
    return 0;
}