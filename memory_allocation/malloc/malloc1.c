#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    
    ptr=(int*)malloc(sizeof(int));
    if (ptr==NULL){
        printf("memory allocation is failed:\n");
        
    }
    else{
        *ptr=90;
        printf("the value of the ptr is :%d\n",*ptr);
    }
    free(ptr);
    return 0;
}
