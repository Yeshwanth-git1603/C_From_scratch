#include<stdio.h>
void main(){
    struct friends{
        int phno;
        char name[40];
        char address[40];
        int salary;
    };
    
struct friends f;
int i,n;
printf("enter the n value:");
scanf("%d",&n);

for (i=0;i<n;i++){
    printf("enter the phno:\n");
    scanf("%d",&f.phno);
    printf("the phno of the friend is:%d\n",f.phno);
    printf("enter the name:\n");
    scanf("%s",&f.name);
    printf("the name of the friend is:%s\n",f.name);
    printf("enter the address:\n");
    scanf("%s",&f.address);
    printf("the address of the friend is:%s\n",f.address);
    printf("enter the salary:\n");
    scanf("%d",&f.salary);
    printf("the salary of the friend is:%d\n",f.salary);
    printf("size of structure is:%d",sizeof(f));
}
}
