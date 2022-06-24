#include<stdio.h>
// reverse array
int main(){
    int mark[5] = {19, 10, 8, 17, 9};
    for(int i = 1; i<=5; i++){
        printf("%d \n", mark[5 - i]);
    }
    return 0;
}