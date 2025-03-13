#include<stdio.h>
void main(){
    int num,sum=0;
    printf("Enter the limit: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++){
        sum+=i;
    }
    printf("The sum is: %d",sum);
    return 0;
}
