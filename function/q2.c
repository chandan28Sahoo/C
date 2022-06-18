#include<stdio.h>
 
// write pow function
double power(int number);


int main() {
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    double root = power(num);
    printf("%.2f",root);
}

double power(int number){
    double root = 1;
    int i = 0;
    while (1)
    {
        i = i + 1;
        root = ((number / root) + root) / 2;
        if (i == number + 1) { break; }
    }
    return root;
}