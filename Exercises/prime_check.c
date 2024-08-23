#include<stdio.h>
int main(){
    int c=0,z,i,n;
    printf("enter the number to check:\n");
    scanf("%d",&n);
    for (i=0;i<n+1;i++){
        z = n % i;
    }
    if (z==0){
        c++;
    }
if (c==2){
    printf("prime %d ",n);
}
else{
    printf("not prime %d",n);
}
    return 0;
}



