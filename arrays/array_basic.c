#include<stdio.h>
int main(){
    int i,a[5];
    printf("enter the array elements:\n");
    for (i=0;i<5;++i){
        scanf("%d",&a[i]);
    }
    printf("displaying the array elements:\n");
    for (i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
