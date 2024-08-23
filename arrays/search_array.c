#include<stdio.h>
int main(){
    int a[10],n,i;
    printf("enter the array elements:\n");
    for (i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the n value:\n");
    scanf("%d",&n);
    for (i=0;i<5;i++){
        printf("elements in the array are:%d\n",a[i]);
    }
    if (a[i]==n){
        printf("found %d",n);
    }
    else{
        printf("not found %d",n);
    }
    return 0;
}
