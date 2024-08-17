#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a value:");
    scanf("%d",&a);
    printf("enter b value:");
    scanf("%d",&b);
    printf("enter c value:");
    scanf("%d",&c);
    
    if (a > b && a > c){
        printf("%d is greater:",a);
    }
    else if (b > c){
        printf("%d is greater:",b);
    }
    else{
        printf("%d is greater",c);
    }
    return 0;
}
