#include<stdio.h>
void main(){
    int num,sum = 0;
    printf("Enter a number to check if it's strong: ");
    scanf("%d", &num);
    int stored_num = num;

    while(num !=0){
        int curr_num = num % 10, fact=1;
        for(int i = 1; i<=curr_num; i++){
            fact *= i;
        }
        sum += fact;
        num /=10;
    }
    if(sum == stored_num){
        printf("%d is a strong number.",stored_num);
    }
    else printf("%d is not a strong number",stored_num);
    return 0;
}
