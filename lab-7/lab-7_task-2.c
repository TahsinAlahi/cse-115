#include<stdio.h>
void main(){
    int sum = 0, num=1;
    printf("Enter a number to get sum (enter 0 to stop)\n");
    while(num!=0){
        printf("Enter the number: ");
        scanf("%d", &num);
        sum += num;
    }
    printf("The sum is %d", sum);
    return 0;
}
