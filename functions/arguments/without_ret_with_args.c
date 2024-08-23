#without return type without arguments
#include<stdio.h>
int area(){
    int res,l,b;
    
    printf("enter the length:");
    scanf("%d",&l);
    printf("enter the breadth:");
    scanf("%d",&b);
    
    res=(l*b);
    printf("the area of rect is: %d",res);
    
}

int main(){
    int l,b,z;
    z=area();
    return 0;
}
