#include<stdio.h>
int main(){
    int a=10,b=20;
    int *p,*q;
    p=&a;
    q=&b;
    printf("the address of a is :%u\n",p);
    printf("the address of b is :%u\n",q);
    printf("the value present in the address a is:%u\n",*p);
    printf("the value present in the address b is:%u\n",*q);
    printf("the address of p is :%u\n",&p);
    printf("the address of q is :%u\n",&q);
    printf("the address of a is:%u\n",&a);
    printf("the address of b is :%u\n",&b);
}
