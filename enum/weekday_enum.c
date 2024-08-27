#include<stdio.h>

enum weekday{
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
};
int main(){
enum weekday today;

today=wednesday;

printf("the weekday is %d",today);

}
