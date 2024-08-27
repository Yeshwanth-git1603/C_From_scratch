#include<stdio.h>
int x=10;
void func(){
    printf("%d\n",x);
    x++;
    printf("%d\n",x);
}

int main(){
    printf("%d\n",x);
    func();
    x++;
    printf("%d\n",x);
    func();
    x++;
    printf("%d\n",x);
}

#using local variable
