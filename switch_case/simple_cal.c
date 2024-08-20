#include<stdio.h>
int main(){
    int a,b,option;
    printf("1.add,2.sub,3.mul,4.div");
    printf("\n");
    printf("enter the option:",option);
    scanf("%d",&option);
    printf("enter A value:",a);
    scanf("%d",&a);
    printf("enter B value:",b);
    scanf("%d",&b);
    
    switch(option)
    {
        case 1:
            printf("%d +  %d = %d",a,b,a+b);
            break;
        case 2:
            printf("%d - %d = %d",a,b,a-b);
            break;
        case 3:
            printf("%d * %d = %d",a,b,a*b);
            break;
        case 4:
            printf("%d / %d = %d",a,b,a/b);
            break;
            
            
        default:
            printf("incorrect option");
            
    }
    return 0;
    
}
