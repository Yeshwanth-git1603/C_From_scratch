#include<stdio.h>

int main(){
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    if (num % 2 == 0){
        printf("the number %d is even", num);
    }
    else{
        printf("the number %d is odd", num);
    }
    return 0;
}

