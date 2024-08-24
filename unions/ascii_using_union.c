#include<stdio.h>
#include<string.h>

union sample{
    int A;
    char c;
};

int main(){
    union sample u;
    u.A=65;
    printf("the Ascii value of A is %d\n",u.A);
    printf("the charc is :%c",u.c);
}
#findingtheasciivalueofthecharacter
