/* 
. Search on what a "nested loop" is & print this
pattern using it. 
*****
*****
*****
*****
*/


#include<stdio.h>

int main(){
    int num = 4;
    for(int i = 1; i<=num; i++){
        for(int j = 1; j<=num; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

