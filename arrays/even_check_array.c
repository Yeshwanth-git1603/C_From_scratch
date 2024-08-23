#include<stdio.h>
int main(){
    int i,a[10];
    printf("enter the array elements to check:\n");
    for (i=0;i<10;i++){
        scanf("%d",&a[i]);
        if (a[i] % 2 == 0){
            printf("even %d\n",a[i]);
            
        }
        else{
            printf("odd %d\n",a[i]);
        }
    }
    return 0;
}
