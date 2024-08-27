/* memeory allocation for a single float*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    
    ptr=(float*)malloc(sizeof(float));
    if (ptr==NULL){
        printf("memory allocation is failed:");
       return 1;	
    }
    else{
        *ptr=90.00f;
        printf("the value of the ptr is :%.2f",*ptr);
    }
    free(ptr);
    return 0;
}

