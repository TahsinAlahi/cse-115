#include<stdio.h>
void main(){
    int nth_month;
    printf("Enter a number of month: ");
    scanf("%d", &nth_month);

    switch(nth_month){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Number of days: 31");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Number of days: 30");
        break;
    case 2:
        printf("Number of days: 28 (29 in leap year)");
        break;
    default:
        printf("Enter a valid month number (1-12)");
    }
    return 0;
}
