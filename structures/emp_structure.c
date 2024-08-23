#include<stdio.h>
void main()
{
    struct emp{
        char ename[40];
        float salary;
        char address[40];
        int empid;
};

struct emp e;

strcpy(e.ename,"yeshwanth");
printf("the ename is :%s\n",e.ename);
e.salary=4500.4;
printf("the salary is : %f\n",e.salary);
strcpy(e.address,"madhuranagar");
printf("the address of employee is :%s\n",e.address);
e.empid=12;
printf("the empid of employee is : %d\n",e.empid);
printf("the size of the memebers in the srtucture is:%d",sizeof(e));
}

#structure program
