#studentmarks

#include<stdio.h>
#include<string.h>
void main(){
    struct student{
        int rno;
        char name[40];
        int sub[6];
        int total;
        float avg;
        char result[6];
        char grade[10];
        
    };
    
struct student s;
int n,i;
printf("enter the n value:");
scanf("%d",&n);
s.total=0;
for (i=0;i<n;i++){
    printf("enter the marks of sub %d:",i);
    scanf("%d",&s.sub[i]);
    s.total=s.total+s.sub[i];
}
printf("student total is %d\n",s.total);
if (s.sub[1] < 35 || s.sub[2] < 35 || s.sub[3] < 35 || s.sub[4] < 35 || s.sub[5] < 35 || s.sub[6] < 35){
    printf("Student got failed\n");
    strcpy(s.result,"fail");
    strcpy(s.grade,"Nill");
}
else{
    printf("student passedn");
    strcpy(s.result,"Pass");
    printf("the total marks of the student is %d:\n",s.total);
    s.avg=s.total/6.0;
    printf("the average of the student is %.2f:\n",s.avg);

    if (s.avg > 60){
        strcpy(s.grade,"first");
        //printf("the grade of the student is %d\n",s.grade);
    }
    else if (s.avg > 50 && s.avg <=60){
        strcpy(s.grade,"second");
    }
    else{
        strcpy(s.grade,"Third");
    }
}
printf("Total Marks of the student is %d\n",s.total);
printf("Average  is %f\n",s.avg);
printf("the result of the student is %s\n",s.result);
printf("the grade of the student is %s\n",s.grade);
}


