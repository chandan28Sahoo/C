#include<stdio.h>
/* 
a. In an array of numbers, find how many times does
a number 'x' occurs.
 */
int main(){
    int mark[10] = {19, 10, 8, 17, 9, 10, 15,10,9,19};
    for(int i = 0; i<=10; i++){
        int x = mark[i];
        int count = 0;
        for(int j = 0; j<10; j++){
            if(x == mark[j]){
                count++;
            }
        }
        printf("%d is %d \n", x, count);
    }
    return 0;
}