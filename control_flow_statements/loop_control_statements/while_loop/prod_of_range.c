#include<stdio.h>
int main(){
    int s,i;
    i=1;
    s=1;
    while (i<=5){
        s=s*i;
        printf("the prod of the digits is:%d",s);
        printf("\n");
        i++;
    }
    return 0;
    
}
