#include<stdio.h>
int main(){
    int a=10,b=20;
    int *  const ptr=&a;
    printf("the value stored in ptr is %d\n",*ptr);
    
    *ptr=*ptr+100;
    
    printf("the data stored to the pointer is %d\n",*ptr);
    
    
}
#const to pointer
