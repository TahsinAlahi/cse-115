#include<stdio.h>
void main(){
    int year;
    printf("Enter a year to check if it's a leap year: ");
    scanf("%d", &year);

    if(year%4==0){
        printf("This year is a leap year");
    }else{
        if(year%400==0 && year%100!=0){
            printf("This year is a leap year");
        }else{
            printf("This year is not a leap year");
        }
    }
    return 0;
}
