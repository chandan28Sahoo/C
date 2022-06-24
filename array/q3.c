/* 
 Write a program to print the largest number in an
array.
 */


#include<stdio.h>

int main(){
    int mark[5] = {19, 10, 8, 17, 9};
    int max = 0;
    for(int i = 0; i < 5; i++){
        if(max < mark[i]){
            max = mark[i];
        }
    }
    printf("max of array is is : %d ", max);
    return 0;
}