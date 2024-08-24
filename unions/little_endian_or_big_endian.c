#include<stdio.h>
#include<string.h>

union sample{
    int a;
    char c;
};

int main(){
    union sample u;
    u.a=5;
    printf("the value of a is :%d\n",u.a);
    if (u.c==5){
        printf("littleEndian");
    }
    else{
        printf("BigEndian");
    }
    
}
