#with return type with arguments
#include<stdio.h>
int area(int l,int b){
    int res;
    
    printf("enter the length:");
    scanf("%d",&l);
    printf("enter the breadth:");
    scanf("%d",&b);
    
    res=(l*b);
    return res;
    
}

int main(){
    int l,b,z;
    z=area(l,b);
    printf("area of rect is :%d",z);
    return 0;
}
