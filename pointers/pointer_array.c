#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int *ptr;
    ptr=&a[0];
    printf("%x\n",*ptr);
    printf("the address of index 0 is: %x\n",ptr++);
    printf("%x\n",*ptr);
    printf("the address of index 1 is :%x\n",ptr++);
    printf("%x\n",*ptr);
    printf("the address of index 2 is : %x\n",ptr++);
    printf("%x\n",*ptr);
    printf("the address of index 3 is : %x\n",ptr++);
    printf("%x\n",*ptr);
    printf("the address of index 4 is : %x\n",ptr++);
    
    



}
