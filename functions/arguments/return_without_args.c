#with return type without arguments

#include<stdio.h>
int area(){
    int res,l,b;
    
    printf("enter the length:");
    scanf("%d",&l);
    printf("enter the breadth:");
    scanf("%d",&b);
    
    res=(l*b);
    return res;
    
}

int main(){
    int l,b,z;
    z=area();
    printf("the area of the rect is :%d",z);
    return 0;
}
