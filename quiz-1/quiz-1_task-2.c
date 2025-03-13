#include<stdio.h>
void main(){
    int hour=0, week=0, day=0;
    printf("Enter the total hours: ");
    scanf("%d", & hour);

    day = hour % 24;
    hour /= 24;
    week = day % 7;
    day /= 7;

    printf("%d week, %d days and %d hours", week, day,hour);
    return 0;
}
