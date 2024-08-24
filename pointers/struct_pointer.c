#include<stdio.h>
#include<string.h>
#pragma pack(1)


    struct student {
        int rno;
        char name[20];
        char address[23];
};

int main(){
    struct student s;
    struct student *sp;
    sp=&s;
    printf("the add of s is %x\n",sp);
    sp->rno=1;
    printf("the rno of the student is %u\n",sp->rno);
    strcpy(sp->name,"yeshwanth");
    printf("the name of the student is %s\n",sp->name);
    strcpy(sp->address,"madhuranagar");
    printf("the address of the student is %s\n",sp->address);
    printf("the size of structure s is: %u\n",sizeof(s));

}

#structurepointer
