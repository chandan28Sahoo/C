#include<stdio.h>
/* 
b. Write a program to check if the given number is a
natural number
 */
int main(){
    int num;
    printf("Enter a number to check natural or not : ");
    scanf("%d", &num);
    if(scanf("%d", &num)){
        printf("yes\n");
    }else{
        printf("no");
    }
    // if (typeof n !== 'number') 
	//         return 'Not a number'; 
			
	//  return (n >= 0.0) && (Math.floor(n) === n) && n !== Infinity;

    return 0;
}